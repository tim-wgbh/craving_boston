<?php
/**
 * @file
 * craving_boston_site.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function craving_boston_site_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audio|node|article|form';
  $field_group->group_name = 'group_audio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Audio',
    'weight' => '7',
    'children' => array(
      0 => 'field_audio',
      1 => 'field_soundcloud',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-audio field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_audio|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_food_wine_volunteeering|node|food_wine_event|form';
  $field_group->group_name = 'group_food_wine_volunteeering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'food_wine_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volunteering',
    'weight' => '11',
    'children' => array(
      0 => 'field_task',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-food-wine-volunteeering field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_food_wine_volunteeering|node|food_wine_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hero|node|article|form';
  $field_group->group_name = 'group_hero';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hero',
    'weight' => '6',
    'children' => array(
      0 => 'field_image',
      1 => 'field_carousel',
      2 => 'field_hide_hero',
      3 => 'group_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hero field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_hero|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hero|node|recipe|form';
  $field_group->group_name = 'group_hero';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hero',
    'weight' => '5',
    'children' => array(
      0 => 'field_image',
      1 => 'group_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hero field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_hero|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|article|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hero';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '9',
    'children' => array(
      0 => 'field_video_file',
      1 => 'field_video_poster',
      2 => 'field_internet_video',
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
  $field_groups['group_video|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|recipe|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hero';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '8',
    'children' => array(
      0 => 'field_internet_video',
      1 => 'field_hide_hero',
      2 => 'field_video_file',
      3 => 'field_video_poster',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_video|node|recipe|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Audio');
  t('Hero');
  t('Video');
  t('Volunteering');

  return $field_groups;
}
