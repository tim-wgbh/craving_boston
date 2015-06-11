<h2 class="title<?php print $has_video ? ' has-video' : ''; ?>"><?php print $fields['title']->content; ?></h2>
<div class="tease">
  <div class="image">
    <?php print $image; ?>
  </div>
  <div class="deck"><?php print ($fields['type']-> raw =='recipe') ? $fields['recipe_description']->content : $fields['body']->content; ?></div>
</div>
