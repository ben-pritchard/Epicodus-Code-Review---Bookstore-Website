<?php
/**
 * @file
 * book_review.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function book_review_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-book_review-field_book_author'.
  $field_instances['node-book_review-field_book_author'] = array(
    'bundle' => 'book_review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Who wrote the book?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_book_author',
    'label' => 'Book Author',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-book_review-field_rating'.
  $field_instances['node-book_review-field_rating'] = array(
    'bundle' => 'book_review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What did you think of the book?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rating',
    'label' => 'Rating',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-book_review-field_review_body'.
  $field_instances['node-book_review-field_review_body'] = array(
    'bundle' => 'book_review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What did you think of the book?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_review_body',
    'label' => 'Review Body',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Book Author');
  t('Rating');
  t('Review Body');
  t('What did you think of the book?');
  t('Who wrote the book?');

  return $field_instances;
}