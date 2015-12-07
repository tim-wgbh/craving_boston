<?php
/**
 * @file
 * craving_boston_site.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function craving_boston_site_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.craving_boston.small';
  $breakpoint->name = 'small';
  $breakpoint->breakpoint = '(max-width: 320px)';
  $breakpoint->source = 'craving_boston';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['breakpoints.theme.craving_boston.small'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.craving_boston.medium';
  $breakpoint->name = 'medium';
  $breakpoint->breakpoint = '(max-width: 480px)';
  $breakpoint->source = 'craving_boston';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['breakpoints.theme.craving_boston.medium'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.craving_boston.limbo';
  $breakpoint->name = 'limbo';
  $breakpoint->breakpoint = '(max-width: 760px)';
  $breakpoint->source = 'craving_boston';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.craving_boston.limbo'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.craving_boston.large';
  $breakpoint->name = 'large';
  $breakpoint->breakpoint = '(max-width: 1200px)';
  $breakpoint->source = 'craving_boston';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.craving_boston.large'] = $breakpoint;

  return $export;
}
