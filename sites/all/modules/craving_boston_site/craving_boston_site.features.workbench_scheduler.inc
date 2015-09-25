<?php
/**
 * @file
 * craving_boston_site.features.workbench_scheduler.inc
 */

/**
 * Implements hook_workbench_scheduler_export_schedules().
 */
function craving_boston_site_workbench_scheduler_export_schedules() {
  $items = array(
    'draft_to_published' => array(
      'name' => 'draft_to_published',
      'label' => 'Draft-to-published',
      'start_state' => 'draft',
      'end_state' => 'published',
      'types' => array(
        0 => 'article',
        1 => 'multi_recipe',
        2 => 'recipe',
      ),
    ),
    'review_to_published' => array(
      'name' => 'review_to_published',
      'label' => 'Review-to-published',
      'start_state' => 'needs_review',
      'end_state' => 'published',
      'types' => array(
        0 => 'article',
        1 => 'multi_recipe',
        2 => 'recipe',
      ),
    ),
  );
  return $items;
}
