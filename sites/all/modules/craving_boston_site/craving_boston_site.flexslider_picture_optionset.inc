<?php
/**
 * @file
 * craving_boston_site.flexslider_picture_optionset.inc
 */

/**
 * Implements hook_default_flexslider_picture_optionset().
 */
function craving_boston_site_default_flexslider_picture_optionset() {
  $export = array();

  $flexslider_picture_optionset = new stdClass();
  $flexslider_picture_optionset->disabled = FALSE; /* Edit this to true to make a default flexslider_picture_optionset disabled initially */
  $flexslider_picture_optionset->api_version = 1;
  $flexslider_picture_optionset->flexslider_optionset = 'craving_boston';
  $flexslider_picture_optionset->imagestyle_type = 'image_style';
  $flexslider_picture_optionset->mapping = 'featured_main_mapping';
  $flexslider_picture_optionset->fallback = '';
  $export['craving_boston'] = $flexslider_picture_optionset;

  return $export;
}
