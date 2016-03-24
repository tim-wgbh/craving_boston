<?php
error_log('Read');
define('VAR_RADIOACTIVITY_CHECKSUM_SALT', 'footlongchickenteriyaki');
$file_dir = dirname(__FILE__);
$drupal_root = str_replace('/sites/all/modules/radioactivity','', $file_dir);
define('VAR_RADIOACTIVITY_DRUPAL_ROOT', $drupal_root);
$temp_dir = file_directory_temp();
define('VAR_RADIOACTIVITY_TEMP_DIR', $temp_dir);
define('VAR_RADIOACTIVITY_REDIS_HOST', 'localhost');
define('VAR_RADIOACTIVITY_REDIS_PORT', '6379');
