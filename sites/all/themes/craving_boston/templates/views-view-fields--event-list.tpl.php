<div class="row event">
  <div class="col-md-12 title">
    <h2><?php print $fields['title']->content; ?></h2>
  </div>
  <?php if (isset($fields['field_image'])): ?>
    <div class="col-md-7 col-xs-12 info">
      <div class="calendar-date">
        <?php print $fields['event_calendar_date']->content; ?>
      </div>
      <?php print $fields['body']->content; ?>
      <?php if (isset($fields['field_link'])): ?>
        <?php print $fields['field_link']->content; ?>
      <?php endif; ?>
    </div>
    <div class="col-md-5 col-xs-12">
      <?php print $fields['field_image']->content; ?>
    </div>
  <?php else: ?>
    <div class="col-md-12 info">
      <div class="calendar-date">
        <?php print $fields['event_calendar_date']->content; ?>
      </div>
      <?php print $fields['body']->content; ?>
      <?php if (isset($fields['field_link'])): ?>
        <?php print $fields['field_link']->content; ?>
      <?php endif; ?>
    </div>
  <?php endif; ?>
</div>
