<?php

/**
 * Functions and utilities for Optimizely X module.
 */

/**
 * Add the snippet to the <head> section of the page.
 */
function optimizely_x_add_optimizely_snippet($project_id) {
  $js_src = 'https://cdn.optimizely.com/js/' . intval($project_id) . '.js';
  drupal_add_js($js_src, array('external' => TRUE));
}
