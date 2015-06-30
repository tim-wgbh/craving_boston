<script src="http://jwpsrv.com/library/jYGMQmQVEeOdAyIACmOLpg.js"></script>
<div id="jw-player"></div>
<script type='text/javascript'>
  jwplayer('jw-player').setup({
    file: "<?php print $video_file; ?>",
    image: "<?php print $video_poster; ?>",
    width:  640,
    height: 360,
    primary: 'flash'
  });
</script>
