<div class="row">
  <div class="col-md-4 col-xs-12"><?php echo $fields['field_image']->content; ?></div>
  <div class="col-md-8 col-xs-12">
    <div class="name"><?php echo $fields['title']->content; ?></div>
    <div class="bio-text"><?php echo $fields['body']->content; ?></div>
    <div class="social-media">
      <?php if (!empty($fields['field_twitter']->content)): ?>
        <a href="https://twitter.com/<?php echo $fields['field_twitter']->content; ?>" target="_blank"><span class="social-media-icon twitter"></span></a>
      <?php endif; ?>
      <?php if (!empty($fields['field_instagram']->content)): ?>
        <a href="https://instagram.com/<?php echo $fields['field_instagram']->content; ?>" target="_blank"><span class="social-media-icon instagram"></span></a>
      <?php endif; ?>
      <?php if (!empty($fields['field_facebook']->content)): ?>
        <a href="https://www.facebook.com/<?php echo $fields['field_facebook']->content; ?>" target="_blank"><span class="social-media-icon facebook"></span></a>
      <?php endif; ?>
      <?php if (!empty($fields['field_pinterest']->content)): ?>
        <a href="https://www.pinterest.com/<?php echo $fields['field_pinterest']->content; ?>" target="_blank"><span class="social-media-icon pinterest"></span></a>
      <?php endif; ?>
    </div>
  </div>
</div>