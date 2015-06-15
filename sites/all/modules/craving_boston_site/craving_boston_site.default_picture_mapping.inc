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
  $picture_mapping->label = 'Article Mapping';
  $picture_mapping->machine_name = 'article_mapping';
  $picture_mapping->breakpoint_group = 'craving_boston';
  $picture_mapping->mapping = array(
    'breakpoints.theme.craving_boston.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'articlebreakpoints_theme_craving_boston_wide_1x',
      ),
    ),
    'breakpoints.theme.craving_boston.normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'articlebreakpoints_theme_craving_boston_normal_1x',
      ),
    ),
    'breakpoints.theme.craving_boston.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'articlebreakpoints_theme_craving_boston_narrow_1x',
      ),
    ),
    'breakpoints.theme.craving_boston.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'articlebreakpoints_theme_craving_boston_mobile_1x',
      ),
    ),
  );
  $export['article_mapping'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Featured Main Mapping';
  $picture_mapping->machine_name = 'featured_main_mapping';
  $picture_mapping->breakpoint_group = 'craving_boston';
  $picture_mapping->mapping = array(
    'breakpoints.theme.craving_boston.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_main_large',
      ),
    ),
    'breakpoints.theme.craving_boston.normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_main_large',
      ),
    ),
    'breakpoints.theme.craving_boston.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_main_mobile',
      ),
    ),
    'breakpoints.theme.craving_boston.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_main_mobile',
      ),
    ),
  );
  $export['featured_main_mapping'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Featured Sub Mapping';
  $picture_mapping->machine_name = 'featured_sub_mapping';
  $picture_mapping->breakpoint_group = 'craving_boston';
  $picture_mapping->mapping = array(
    'breakpoints.theme.craving_boston.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_sub_large',
      ),
    ),
    'breakpoints.theme.craving_boston.normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_sub_large',
      ),
    ),
    'breakpoints.theme.craving_boston.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_sub_mobile',
      ),
    ),
    'breakpoints.theme.craving_boston.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'featured_sub_mobile',
      ),
    ),
  );
  $export['featured_sub_mapping'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Single Node';
  $picture_mapping->machine_name = 'single_node';
  $picture_mapping->breakpoint_group = 'craving_boston';
  $picture_mapping->mapping = array(
    'breakpoints.theme.craving_boston.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'node_wide',
      ),
    ),
    'breakpoints.theme.craving_boston.normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'node_normal',
      ),
    ),
    'breakpoints.theme.craving_boston.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'node_narrow',
      ),
    ),
    'breakpoints.theme.craving_boston.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'node_mobile',
      ),
    ),
  );
  $export['single_node'] = $picture_mapping;

  return $export;
}
