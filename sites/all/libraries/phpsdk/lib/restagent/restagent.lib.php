<?php
namespace restagent;

/**
 *
 * Simple HTTP REST Client.
 * For full disclosure this is a shameless rip-off from: https://github.com/inadarei/settee/blob/master/src/classes/ZaphpaRestClient.class.php
 * That is: if you can call "stealing" from one's self "shameless" :)
 *
 * @TODO support proxying using: CURLOPT_HTTPPROXYTUNNEL
 *
 */
class Request {

  const DEFAULT_TIMEOUT = 5500;

  private $base_url = '';
  private $data = array();
    private $rawBodyAlreadySet = false;
  private $params = array();
  private $headers = array();
  private $method = '';
  private $curl;

  /**
   * Public constructor
   *
   * @param null $base_url
   */
  public function __construct($base_url = '') {

    $this->base_url = (!empty($base_url)) ? rtrim($base_url, "/") : '';

    $this->curl = curl_init();
    curl_setopt($this->curl, CURLOPT_USERAGENT, "RestAgent/1.0");
    curl_setopt($this->curl, CURLOPT_RETURNTRANSFER, 1);
    curl_setopt($this->curl, CURLOPT_HEADER, 1);
    curl_setopt($this->curl, CURLOPT_FOLLOWLOCATION, 1);
    if (defined('CURLOPT_TIMEOUT_MS')) {
      curl_setopt($this->curl, CURLOPT_TIMEOUT_MS, self::DEFAULT_TIMEOUT);
    }
    curl_setopt($this->curl, CURLOPT_FORBID_REUSE, false); // Connection-pool for CURL
    curl_setopt($this->curl, CURLOPT_ENCODING , "gzip");
    curl_setopt($this->curl, CURLOPT_SSL_VERIFYPEER, true);
    if (getenv('REST_AGENT_DEBUG')) {
      curl_setopt($this->curl, CURLOPT_VERBOSE, true);
    }
    $pemPath = $this->getAccessibleCacert();
    curl_setopt($this->curl, CURLOPT_CAINFO, $pemPath);
  }
  /**
   * Class destructor cleans up any resources
   */
  public function __destruct() {
    curl_close($this->curl);
  }

  /**
   * Set HTTP method to use with send()
   *
   * @param $method
   * @return Request
   */
  public function method($method) {
    $this->method = strtoupper($method);
    return $this;
  }

  /**
   * Set curl/http timeout in milliseconds.
   *
   * @param $ms
   */
  public function timeout($ms) {
    curl_setopt($this->curl, CURLOPT_TIMEOUT_MS, $ms);
    return $this;
  }

  /**
   * HTTP HEAD
   *
   * @TODO: http head is odd enough that for now it is not using http_request method and duplicates some code.
   *        We may need to revisit that decision, later.
   *
   * @return
   *     Raw HTTP Headers of the response.
   *
   * @see: http://www.php.net/manual/en/context.params.php
   *
   */
  public function head($uri) {
    curl_setopt($this->curl, CURLOPT_HEADER, 1);

    $full_url = $this->get_full_url($uri);
    curl_setopt($this->curl, CURLOPT_URL, $full_url);
    curl_setopt($this->curl, CURLOPT_CUSTOMREQUEST, 'HEAD');
    curl_setopt($this->curl, CURLOPT_NOBODY, true);

    // $this->headers is an associative array, to allow for overrides in set(), but
    // curl_setopt() takes indexed array, so we need to convert.
    $idxed_headers = array();
    foreach ($this->headers as $name => $value) {
      $idxed_headers[] = "$name: $value";
    }
    curl_setopt($this->curl, CURLOPT_HTTPHEADER, $idxed_headers);

    if (!empty($this->data) && is_array($this->data)) {
      $data = http_build_query($this->data);
      $this->header('Content-Length', strlen($data));
      curl_setopt($this->curl, CURLOPT_POSTFIELDS, $data);
    }

    $response = curl_exec($this->curl);

    // Check if any error occurred
    if(curl_errno($this->curl))
    {
      throw new RestAgentException(curl_error($this->curl));
    }

    $this->reset();

    // Restore default values
    curl_setopt($this->curl, CURLOPT_NOBODY, false);
    curl_setopt($this->curl, CURLOPT_HEADER, false);

    if (function_exists('http_parse_headers')) {
      $headers = http_parse_headers($response);
    }
    else {
      $headers = $this->_http_parse_headers($response);
    }

    return array(
      'code' => curl_getinfo($this->curl, CURLINFO_HTTP_CODE),
      'meta' => curl_getinfo($this->curl),
      'data' => $headers
    );
  }

  private function reset() {
    //reset defaults to allow clean re-use of the request object
    $this->data = array();
      $this->rawBodyAlreadySet = false;
    $this->headers = array();
    $this->method = '';
  }

  /**
   * Backup PHP impl. for when PECL http_parse_headers() function is not available
   *
   * @param  $header
   * @return array
   * @source http://www.php.net/manual/en/function.http-parse-headers.php#77241
   */
  private function _http_parse_headers( $header ) {
    $retVal = array();
    $fields = explode("\r\n", preg_replace('/\x0D\x0A[\x09\x20]+/', ' ', $header));
    foreach( $fields as $field ) {
      if( preg_match('/([^:]+): (.+)/m', $field, $match) ) {
        $match[1] = preg_replace_callback('/(?<=^|[\x09\x20\x2D])./', function($matches){ return strtoupper($matches[0]); }, strtolower(trim($match[1])));
        if( isset($retVal[$match[1]]) ) {
          $retVal[$match[1]] = array($retVal[$match[1]], $match[2]);
        } else {
          $retVal[$match[1]] = trim($match[2]);
        }
      }
    }
    return $retVal;
  }

  /**
   * HTTP GET
   */
  function get($uri) {
    $data = (is_array($this->data)) ? http_build_query($this->data) : null;
    if (!empty($data)) {
      $uri .= "?$data";
    }
    return $this->http_request('GET', $uri);
  }

  /**
   * HTTP PUT
   */
  function put($uri) {
    return $this->http_request('PUT', $uri, $this->data);
  }

  /**
   * HTTP POST
   */
  function post($uri) {
    if (!empty($this->headers['Content-Type']) &&
        !in_array($this->headers['Content-Type'], array('application/x-www-form-urlencoded', 'multipart/form-data'))) {

      throw new RestAgentException("You should not set content-type for HTTP POST that is not either
                                   'application/x-www-form-urlencoded' or 'multipart/form-data'");
    }

    return $this->http_request('POST', $uri, $this->data);
  }

  /**
   * HTTP DELETE
   */
  function delete($uri) {
    return $this->http_request('DELETE', $uri, $this->data);
  }

  /**
   * Custom HTTP Method. Use with caution.
   *
   * @param $uri
   * @param $method
   */
  function send($uri) {
    if (empty($this->method)) {
      throw new RestAgentException("You need to set a method, before calling send()");
    }

    if ($this->method == "HEAD") {
      throw new RestAgentException("Please use call to head() method instead of using send() for making HTTP HEAD calls");
    }

    $this->method = strtoupper($this->method);
    return $this->http_request($this->method, $uri, $this->data);
  }

  /**
   * Generic implementation of a HTTP Request.
   *
   * @param $http_method
   * @param  $uri
   * @param array $data
   * @return
   *  an array containing json and decoded versions of the response.
   */
  private function http_request($http_method, $uri, $_data = array()) {
    if (empty($_data)) {
      $data = '';
    } else {
      if (is_array($_data)) {
        $data = http_build_query($_data);
      } else {
        $data = $_data;
      }
    }

    $http_method = strtoupper($http_method);

    if ($http_method == 'GET' && !empty($this->params) && is_array($this->params)) {
      throw new RestAgentException("You may not use param() when issuing an HTTP GET. Use data() instead!");
    }

    $this->header('Content-Length', strlen($data));
    if (!empty($data)) {
      curl_setopt($this->curl, CURLOPT_POSTFIELDS, $data);
    }

    // $this->headers is an associative array, to allow for overrides in set(), but
    // curl_setopt() takes indexed array, so we need to convert.
    $idxed_headers = array();
    foreach ($this->headers as $name => $value) {
      $idxed_headers[] = "$name: $value";
    }

    curl_setopt($this->curl, CURLOPT_HTTPHEADER, $idxed_headers);

    $full_url = $this->get_full_url($uri);

    // Sometimes you want to use query params with non-HTTP GET methods
    if ($http_method != 'GET') {
      $params = (is_array($this->params)) ? http_build_query($this->params) : null;
      if (!empty($params)) {
        $full_url .= "?$params";
      }
    }

    curl_setopt($this->curl, CURLOPT_URL, $full_url);
    curl_setopt($this->curl, CURLOPT_CUSTOMREQUEST, $http_method);

    $response = curl_exec($this->curl);

    // Check if any error occurred
    if(curl_errno($this->curl))
    {
      throw new RestAgentException(curl_error($this->curl));
    }

    $this->reset();

    //$this->check_status($response, $full_url);

    $header_size = curl_getinfo($this->curl, CURLINFO_HEADER_SIZE);
    $headers = substr($response, 0, $header_size);
    $content = substr($response, $header_size);

    if (function_exists('http_parse_headers')) {
      $headers = http_parse_headers($headers);
    } else {
      $headers = $this->_http_parse_headers($headers);
    }

    return array(
      'code' => curl_getinfo($this->curl, CURLINFO_HTTP_CODE),
      'meta' => curl_getinfo($this->curl),
      'headers'  => $headers,
      'data' => $content
    );

  }

  /**
   * Get full URL from a partial one
   */
  private function get_full_url($uri) {
    // We do not want "/", "?", "&" and "=" separators to be encoded!!!
    //$uri = str_replace(array('%2F', '%3F', '%3D', '%26'), array('/', '?', '=', '&'), urlencode($uri));

    if (substr($uri,0,4) === 'http') {
      return $uri;
    }

    // People are forgetful, we are here to help, not: punish.
    if ($uri[0] != '/') {
      $uri = "/$uri";
    }

    return $this->base_url . $uri;
  }

  /**
   * Set an HTTP Head
   */
  public function header() {
    if (func_num_args() == 1) {
      $args = func_get_arg(0);
      if (!is_array($args)) {
        throw new RestAgentException("If you only pass one argument to set() it must be an array");
      }

      foreach ($args as $name => $value) {
        $this->headers[$name] = $value;
      }
      return $this;
    }

    if (func_num_args() == 2) {
      $name = func_get_arg(0);
      $value = func_get_arg(1);
      if (!is_string($name) || !(is_string($value) || is_numeric($value) || is_bool($value))) {
        throw new RestAgentException("If you only pass two arguments to set(), first one must be a string and the second
                                      one must be: a string, a number, or a boolean");
      }
      $this->headers[$name] = $value;
      return $this;
    }

    throw new RestAgentException("set() method only accepts either one or two arguments");
  }

  /**
  * Set HTTP body as a free-form value
  */
  public function body($rawdata) {
    $this->rawBodyAlreadySet = true;
    $this->data = $rawdata;
    return $this;
  }

  /**
   * Set a variable (query param or a data var)
   */
  public function data() {
    if (func_num_args() == 1) {
      if ($this->rawBodyAlreadySet) {
        throw new RestAgentException("Raw HTTP Body was previously set. Cannot alter it with key/value form data");
      }

      $args = func_get_arg(0);
      if (!is_array($args)) {
        throw new RestAgentException("If you only pass one argument to data() it must be an array");
      }

      foreach ($args as $name => $value) {
        $this->data[$name] = $value;
      }
      return $this;
    }

    if (func_num_args() == 2) {
      $name = func_get_arg(0);
      $value = func_get_arg(1);
      if (!is_string($name) || !(is_string($value) || is_numeric($value) || is_bool($value))) {
        throw new RestAgentException("If you only pass two arguments to data(), first one must be a string and the second
                                      one must be: a string, a number, or a boolean");
      }
      $this->data[$name] = $value;
      return $this;
    }

    throw new RestAgentException("data() method only accepts either one or two arguments");
  }

  /**
   * Set a query param. This method can/should not be used with HTTP GET! Use var() call instead or you
   * will get an exception
   */
  public function param() {
    if (func_num_args() == 1) {
      $args = func_get_arg(0);
      if (!is_array($args)) {
        throw new RestAgentException("If you only pass one argument to param() it must be an array");
      }

      foreach ($args as $name => $value) {
        $this->params[$name] = $value;
      }
      return $this;
    }

    if (func_num_args() == 2) {
      $name = func_get_arg(0);
      $value = func_get_arg(1);
      if (!is_string($name) || !(is_string($value) || is_numeric($value) || is_bool($value))) {
        throw new RestAgentException("If you only pass two arguments to param(), first one must be a string and the second
                                      one must be: a string, a number, or a boolean");
      }
      $this->params[$name] = $value;
      return $this;
    }

    throw new RestAgentException("param() method only accepts either one or two arguments");
  }

  /**
   * Check http status for safe return codes
   *
   * @throws RestAgentException
   */
  private function check_status($response, $full_url) {
    $resp_code = curl_getinfo($this->curl, CURLINFO_HTTP_CODE);

    if ($resp_code < 199 || $resp_code > 399 || !empty($response['decoded']->error)) {
      $msg = "Server returned: \"HTTP 1.1. $resp_code\" \nURL: $full_url \nERROR: " . $response['json'];
      throw new RestAgentException($msg);
    }
  }

  /**
   * @param  $path
   *    Full path to a file (e.g. as returned by PHP's realpath function).
   * @return void
   */
  public function file_mime_type ($path)  {
    $ftype = 'application/octet-stream';

    if (function_exists("finfo_file")) {
      $finfo = new finfo(FILEINFO_MIME_TYPE | FILEINFO_SYMLINK);
      $fres = $finfo->file($path);
      if (is_string($fres) && !empty($fres)) {
        $ftype = $fres;
      }
    }

    return $ftype;
  }

  /**
   * @param  $content
   *    content of a file in a string buffer format.
   * @return void
   */
  public function content_mime_type ($content)  {
    $ftype = 'application/octet-stream';

    if (function_exists("finfo_file")) {
      $finfo = new finfo(FILEINFO_MIME_TYPE | FILEINFO_SYMLINK);
      $fres = $finfo->buffer($content);
      if (is_string($fres) && !empty($fres)) {
        $ftype = $fres;
      }
    }

    return $ftype;
  }

  /**
   * Copy the cert to an accessible path, in case we're using this
   * from a phar file.
   *
   * @return string the path to the cacert.pem file
   */
  private function getAccessibleCacert() {
    $cert = __DIR__ . '/cacert.pem';
    if (substr($cert, 0, 7) == 'phar://') {
      $newCert = sys_get_temp_dir() . '/cacert.pem';
      if (file_exists($cert)) {
        if (!file_exists($newCert) || filesize($cert) != filesize($newCert)) {
          copy($cert, $newCert);
        }
        return $newCert;
      }
    }
    return $cert; // fallback to original path
  }

}

class RestAgentException extends \Exception {}
