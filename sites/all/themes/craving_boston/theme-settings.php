<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function craving_boston_form_system_theme_settings_alter(&$form, &$form_state) {

  $form['craving_boston_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('craving_boston Settings'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['craving_boston_settings']['breadcrumbs'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show breadcrumbs in a page'),
    '#default_value' => theme_get_setting('breadcrumbs','craving_boston'),
    '#description'   => t("Check this option to show breadcrumbs in page. Uncheck to hide."),
  );
