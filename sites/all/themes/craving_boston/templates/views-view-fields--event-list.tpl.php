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
        <a href="<?php print $fields['field_link']->content; ?>" rel="nofollow" target="_blank" title="More about <?php print $fields['title']->content; ?>">Get more info >></a>
        <div class="share-wrapper">
          <span class="share fb">
            <div class="fb-share-button" data-href="<?php print $fields['field_link']->content; ?>" data-layout="button"></div>      
          </span>
          <span class="share twitter">    
            <a class="twitter-share-button" href="https://twitter.com/intent/tweet?text=Check%20out%20this%20event%3A%20&url=<?php print urlencode($fields['field_link']->content); ?>&via=CravingBoston">Tweet</a>
          </span>
        </div>
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
        <a href="<?php print $fields['field_link']->content; ?>" rel="nofollow" target="_blank" title="More about <?php print $fields['title']->content; ?>">Get more info >></a>
        <div class="share-wrapper">
          <span class="share fb">
            <div class="fb-share-button" data-href="<?php print $fields['field_link']->content; ?>" data-layout="button"></div>      
          </span>
          <span class="share twitter">    
            <a class="twitter-share-button" href="https://twitter.com/intent/tweet?text=Check%20out%20this%20event%3A%20&url=<?php print urlencode($fields['field_link']->content); ?>&via=CravingBoston">Tweet</a>
          </span>
        </div>
      <?php endif; ?>
    </div>
  <?php endif; ?>
</div>
