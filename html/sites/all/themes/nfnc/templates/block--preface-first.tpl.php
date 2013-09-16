<div<?php print $attributes; ?>>
  <div class="block-inner clearfix">
    <?php print render($title_prefix); ?>
    <?php if ($block->subject): ?>
    <?php // this is very bad and hacky code.
		// We need to generate a link to the view for the block
		// by converting it to lower case and replacing whitespace
		// with dashes. Note that the url for the view MUST match
		// this pattern or else things WILL break.
	$link = strtolower($block->subject); 
	$link = str_replace(' ', '-', $link);
	?>

		<h2<?php print $title_attributes; ?>>
            <a href="<?php print$link; ?>">
                <?php print $block->subject; ?>
            </a>
        </h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    
    <div<?php print $content_attributes; ?>>
      <?php print $content ?>
    </div>
  </div>
</div>
