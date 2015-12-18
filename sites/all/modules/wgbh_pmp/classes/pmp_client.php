<?php
/**
 * Client for the PMP
 */

// Load the SDK 
// require DRUPAL_ROOT . '/sites/all/libraries/pmpsdk.phar';

class PmpClient {

  /**
   * Initializes a PmpClient object.
   */
  function __construct($cache = TRUE) {
    
    $this->query = new stdClass();
    $this->base_url = variable_get('wgbh_pmp_base_url');
    $this->errors = array();

    // Cache

    // cache set at __construct() trumps all
    if ($cache === FALSE) {
      $this->cache = FALSE;
    }
    // see if cache is globally set
    elseif (variable_get('wgbh_pmp_cache') !== NULL) {
      $this->cache = variable_get('wgbh_pmp_cache');
    }
    // default = use cache
    else {
      $this->cache = TRUE;
    }
    $this->from_cache = FALSE;
    $this->cache_bin = variable_get('wgbh_pmp_cache_bin', 'cache');
    
    // Authorize
    $this->client_id = variable_get('wgbh_pmp_auth_client_id');
    $this->client_secret = variable_get('wgbh_pmp_auth_client_secret');
    $this->client = NULL;
    $this->authorize();
  }

  function authorize() {
  
    // See if this is already stored in cache
    // Note: auth stuff caching is not configurable
    $cached_auth_client = cache_get('wgbh_pmp_auth_client');
    if ($cached_auth_client) {
      $this->client = $cached_auth_client->data;
    }
    else {
      try {
        $client = new \Pmp\Sdk($this->base_url, $this->client_id, $this->client_secret);
        $this->client = $client;
        cache_set('wgbh_pmp_client', $client);
      }
      catch (Exception $e) {
        $message = t('Error getting authentication for PMP, query aborted. Message: @exception', array('@exception' => $e->getMessage()));
        drupal_set_message($message, 'warning');
        $this->errors['auth'][] = $e->getMessage();
      }
    }
    return $this->client;
  }
  
  function getTopic($topic) {
    $client = $this->client;
    
    $result = $client->queryCollection($topic, $filters);
    
    if ($result) {
      $items = $result->items;
    }     
  }
  
  function _validate_guid($string) {
    return preg_match('/^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$/i') === 1;
  }
}