#!/usr/bin/php
<?php
  if ($_SERVER['argc'] != 2) {
	  die("Usage: {$_SERVER['argv'][0]} filename\n");
  }

  $fp = fopen($_SERVER['argv'][1], 'r');
  if (empty($fp)) {
	  die("Cannot open file: {$_SERVER['argv'][1]}\n");
  }

  $escape = array(
	  '.' => '\.',
  );

  while (!feof($fp)) {
	 list ($site, $old, $new) = fgetcsv($fp, 1024);

	 // Skip empty fields.
	 if (empty($site) || empty($old) || empty($new)) {
		  continue;
	 }

	 printf("RewriteCond %%{HTTP_HOST} ^%s$ [NC]\n", strtr($site, $escape));
	 printf("RewriteRule ^%s$ http://languages-linguistics.unimelb.edu.au%s [R=301]\n", strtr($old, $escape), $new);
  }
  fclose($fp);
