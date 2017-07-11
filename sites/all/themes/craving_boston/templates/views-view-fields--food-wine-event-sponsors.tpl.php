<!--
  Overrides the display settings in the UI
  We want a logo image linked to the URL
-->
<?php dpm($fields); ?>
<a href="<?php print $fields['field_link']->content; ?>" target="_blank">
  <?php print $fields['field_image']->content; ?>
</a>
