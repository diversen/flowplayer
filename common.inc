<?php

function flowplayer_include () {
    
    static $loaded = null;
    
    if (!$loaded) {
        template::init('flowplayer');
        template::setJs("/templates/flowplayer/flowplayer-3.2.8.min.js", null, array('head' => true)); 
        $loaded = true;
    }
}

function flowplayer_get_html ($name) {
    $str = <<<EOF
<a href="$name" style="display:block;width:600px;height:330px" class="flowplayer"></a>
<!-- this will install flowplayer inside previous A- tag. -->
<script>
flowplayer("a.flowplayer", "/templates/flowplayer/flowplayer-3.2.8.swf", {
      clip:  {
          autoPlay: false,
          autoBuffering: true
      }
  });
</script>
EOF;
    return $str;
}
