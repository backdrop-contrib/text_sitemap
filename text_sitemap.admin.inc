<?php

/**
 * @file
 * Administration settings for Text sitemap.
 */

/**
 * Implements hook_settings().
 *
 * @return array
 */
function text_sitemap_admin_settings() {
  $form = array();
  $form['google'] = array(
    '#type' => 'fieldset',
    '#title' => t('Google site verification'),
    '#description' => l('Google Search Console', 'https://www.google.com/webmasters/tools/dashboard'),
  );
  $form['google']['google_html_verification'] = array(
    '#type' => 'textfield',
    '#title' => t('HTML file name'),
    '#default_value' => config_get('text_sitemap.settings', 'google_html_verification'),
    '#description' => t('Example: google3dkn3d7e27b48d220.html'),
  );
  $form['google']['google_meta_verification'] = array(
    '#type' => 'textfield',
    '#title' => t('HTML META tag string'),
    '#default_value' => config_get('text_sitemap.settings', 'google_meta_verification'),
    '#description' => t('Enter the value of the content argument from the META tag. Example: DKnmc3xnVdxZac5a2wHvpnI0bBZP0Db9L70tN0Cw7qU'),
  );

  $form['#submit'][] = 'text_sitemap_admin_settings_submit';

  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  return $form;
}

/**
 * Submission handler for verification settings.
 */
function text_sitemap_admin_settings_submit($form, &$form_state) {
  config('text_sitemap.settings')
    ->set('google_html_verification', $form_state['values']['google_html_verification'])
    ->set('google_meta_verification', $form_state['values']['google_meta_verification'])
    ->save();

  menu_rebuild();
  backdrop_set_message(t('The text sitemap module re-built the menu information to set the verification file path.'), 'status');
}
