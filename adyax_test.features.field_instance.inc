<?php
/**
 * @file
 * adyax_test.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function adyax_test_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-country_list-field_country_code'.
  $field_instances['taxonomy_term-country_list-field_country_code'] = array(
    'bundle' => 'country_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_country_code',
    'label' => 'Country Code',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  return $field_instances;
}
