<?php
/**
 * @file
 * craving_boston_site.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function craving_boston_site_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'craving_boston';
  $preset->title = 'Craving Boston';
  $preset->theme = 'classic';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '0',
    'useCSS' => 0,
    'touch' => 1,
    'video' => 1,
    'keyboard' => 1,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '0',
    'itemMargin' => '0',
    'minItems' => '0',
    'maxItems' => '0',
    'move' => '0',
    'animation' => 'fade',
    'slideshow' => 1,
    'slideshowSpeed' => '7000',
    'directionNav' => 0,
    'controlNav' => 'thumbnails',
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 1,
    'pauseOnAction' => 1,
    'pauseOnHover' => 0,
    'manualControls' => '',
    'colorboxEnabled' => FALSE,
    'colorboxImageStyle' => 'featured_main_mapping',
    'colorboxFallbackImageStyle' => '',
  );
  $preset->imagestyle_type = 'image_style';
  $preset->mapping = 'featured_main_mapping';
  $preset->fallback = '';
  $export['craving_boston'] = $preset;

  return $export;
}
