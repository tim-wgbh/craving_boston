<?php
/**
 * @file
 * craving_boston_site.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function craving_boston_site_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'craving_boston';
  $breakpoint_group->name = 'Craving Boston Theme';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.craving_boston.large',
    1 => 'breakpoints.theme.craving_boston.medium',
    2 => 'breakpoints.theme.craving_boston.small',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['craving_boston'] = $breakpoint_group;

  return $export;
}
