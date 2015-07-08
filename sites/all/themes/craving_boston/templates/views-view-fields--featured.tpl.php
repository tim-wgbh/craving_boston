<div class="info">
  <div class="article-title">
    <?php print $fields['title']->content; ?>
  </div>
  <?php if (array_key_exists('field_subhead', $fields) && $fields['field_subhead']->content): ?>
    <div class="article-subhead">
      <?php print $fields['field_subhead']->content; ?>
    </div>
  <?php endif; ?>
</div>
<div class="image">
  <?php print $fields['field_image']->content; ?>
</div>
