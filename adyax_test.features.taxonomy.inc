<?php
/**
 * @file
 * adyax_test.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function adyax_test_taxonomy_default_vocabularies() {
  return array(
    'country_list' => array(
      'name' => 'Country list',
      'machine_name' => 'country_list',
      'description' => 'Vocabulary list of countries with codes',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
