<?php
/**
 * @file
 * craving_boston_site.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function craving_boston_site_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recipes|node|multi_recipe|form';
  $field_group->group_name = 'group_recipes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'multi_recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recipes',
    'weight' => '5',
    'children' => array(
      0 => 'field_recipe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recipes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_recipes|node|multi_recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|article|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '5',
    'children' => array(
      0 => 'field_video_file',
      1 => 'field_video_poster',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_video|node|article|form'] = $field_group;

  return $export;
}
