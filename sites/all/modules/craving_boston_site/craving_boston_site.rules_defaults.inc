<?php
/**
 * @file
 * craving_boston_site.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function craving_boston_site_default_rules_configuration() {
  $items = array();
  $items['rules_clear_page_cache'] = entity_import('rules_config', '{ "rules_clear_page_cache" : {
      "LABEL" : "Clear Page Cache",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "expire" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [ { "node_is_published" : { "node" : [ "node" ] } } ],
      "DO" : [
        { "expire_rules_action_flush_url" : { "urls" : "\\/food \\r\\n\\/drink \\r\\n\\/recipes \\r\\n\\/neighborhoods \\r\\n\\/table-talk " } }
      ]
    }
  }');
  return $items;
}
