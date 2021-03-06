<?php
/**
 * @file
 * imagex_panels.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function imagex_panels_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_user_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_mini_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:11:"panels_mini";s:23:"allowed_layout_settings";a:27:{s:8:"flexible";b:0;s:14:"twocol_stacked";b:0;s:13:"twocol_bricks";b:0;s:6:"twocol";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"onecol";b:0;s:25:"mothership-html5page-page";b:0;s:9:"two_brick";b:0;s:9:"two_66_33";b:0;s:6:"two_50";b:0;s:9:"two_33_66";b:0;s:17:"three_inset_right";b:0;s:16:"three_inset_left";b:0;s:8:"three_33";b:0;s:14:"three_25_50_25";b:0;s:6:"one_fw";b:0;s:3:"one";b:0;s:7:"four_25";b:0;s:12:"two_50_mp_fw";b:1;s:14:"three_33_mp_fw";b:1;s:9:"one_mp_fw";b:1;s:9:"two_50_mp";b:1;s:11:"three_33_mp";b:1;s:6:"one_mp";b:1;}s:10:"form_state";N;}';
  $export['panels_mini_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:11:"panels_page";s:23:"allowed_layout_settings";a:27:{s:8:"flexible";b:0;s:14:"twocol_stacked";b:0;s:13:"twocol_bricks";b:0;s:6:"twocol";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"onecol";b:0;s:25:"mothership-html5page-page";b:0;s:9:"two_brick";b:1;s:9:"two_66_33";b:1;s:6:"two_50";b:1;s:9:"two_33_66";b:1;s:17:"three_inset_right";b:1;s:16:"three_inset_left";b:1;s:14:"three_25_50_25";b:1;s:3:"one";b:1;s:8:"three_33";b:1;s:6:"one_fw";b:1;s:7:"four_25";b:1;s:12:"two_50_mp_fw";b:0;s:14:"three_33_mp_fw";b:0;s:9:"one_mp_fw";b:0;s:9:"two_50_mp";b:0;s:11:"three_33_mp";b:0;s:6:"one_mp";b:0;}s:10:"form_state";N;}';
  $export['panels_page_allowed_layouts'] = $strongarm;

  return $export;
}
