<?php

/**
 * @file
 * Admin form builder callbacks for Optimizely X module.
 */

/**
 * Form builder callback fo Optimizely X admin settiings form.
 */
function optimizely_x_admin_settings_form($form, &$form_state) {
  $form['optimizely_x_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Optimizely X Enabled'),
    '#description' => t('Uncheck this to prevent the snippet from being added to any page.'),
    '#default_value' => variable_get('optimizely_x_enabled', FALSE),
  );

  $form['optimizely_x_project_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Project ID'),
    '#description' => t("Enter your integration's Project ID."),
    '#default_value' => variable_get('optimizely_x_project_id', ''),
  );
  $form['optimizely_x_paths'] = array(
    '#type' => 'textarea',
    '#title' => t('Test paths'),
    '#description' => t("Enter the paths (control and variant) that Optimizely test is running. Wildcards are not accepted. If you're testing on a node path, use the path alias."),
    '#default_value' => variable_get('optimizely_x_paths'),
  );
  return system_settings_form($form);
}
