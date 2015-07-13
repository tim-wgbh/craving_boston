<?php if ($display): ?>
  <h2 class="title<?php print $has_video ? ' has-video' : ''; ?><?php print $is_recipe ? ' recipe' : ''; ?>"><?php print $fields['title']->content; ?></h2>
  <div class="info">
    <?php if ($deck): ?>
      <div class="deck"><?php print $deck; ?></div>
      <div class="byline">By: <?php print $byline; ?></div>
    <?php endif; ?>
  </div>
  <div class="image">
    <?php print $image; ?>
  </div>
<?php endif; ?>
