<div class="row post">
  <div class="col-md-3 image">
    <?php print $image; ?>
  </div>
  <div class="col-md-9 info">
    <div class="title">
      <h2><?php print $headline; ?></h2>
    </div>
    <div class="subhead">
      <?php print $fields['field_subhead']->content; ?>
    </div>
    <div class="tags">
      <?php print $fields['field_tags']->content; ?>
    </div>
  </div>
</div>
