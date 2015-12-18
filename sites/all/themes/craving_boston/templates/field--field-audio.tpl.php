<script src="http://jwpsrv.com/library/<?php print $conf['jwplayer_script']; ?>"></script>
<div id="jw-player"></div>
<script type='text/javascript'>
  jwplayer('jw-player').setup({
    file: "<?php print $audio; ?>",
    width:  640,
    height: 40,
    primary: 'flash'
  });
</script>
