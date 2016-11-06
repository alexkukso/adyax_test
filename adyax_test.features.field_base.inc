<?php
/**
 * @file
 * adyax_test.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function adyax_test_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_country_code'.
  $field_bases['field_country_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country_code',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 3,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
