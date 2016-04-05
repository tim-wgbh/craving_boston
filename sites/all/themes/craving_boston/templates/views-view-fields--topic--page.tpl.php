<?php if ($display): ?>
  <h2><?php print $headline; ?></h2>
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
