<?php
/**
 * @file
 * craving_boston_site.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function craving_boston_site_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Featured Sub Mapping';
  $picture_mapping->machine_name = 'featured_sub_mapping';
  $picture_mapping->breakpoint_group = 'craving_boston';
  $picture_mapping->mapping = array(
    'breakpoints.theme.craving_boston.large' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_sub_large',
      ),
    ),
    'breakpoints.theme.craving_boston.limbo' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_sub_medium',
      ),
    ),
    'breakpoints.theme.craving_boston.medium' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_sub_medium',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_sub_large',
      ),
    ),
    'breakpoints.theme.craving_boston.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_sub_mobile',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_sub_medium',
      ),
    ),
  );
  $export['featured_sub_mapping'] = $picture_mapping;

  return $export;
}
