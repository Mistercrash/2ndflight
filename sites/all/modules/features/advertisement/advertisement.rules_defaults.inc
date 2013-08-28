<?php
/**
 * @file
 * advertisement.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function advertisement_default_rules_configuration() {
  $items = array();
  $items['rules_add_commerce_credits_to_the_buyers_account'] = entity_import('rules_config', '{ "rules_add_commerce_credits_to_the_buyers_account" : {
      "LABEL" : "Add Commerce Credits to the buyers account",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Advertisement" ],
      "REQUIRES" : [ "commerce_order", "commerce_credits", "rules", "commerce_checkout" ],
      "ON" : [ "commerce_checkout_complete" ],
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "commerce_credits" : "commerce_credits" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "commerce_credits_update_on_checkout" : { "commerce_order" : [ "commerce_order" ] } },
        { "drupal_message" : { "message" : "Congratulations, your account credits have been added. Go make yourself some campaigns!" } }
      ]
    }
  }');
  return $items;
}
