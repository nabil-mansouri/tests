#!/usr/bin/php
<?php
 $array = [];
 $i = 0;
 while (++$i < $argc)
 {
    if (strstr($argv[$i], " ", false))
        $array = array_merge($array, explode(" ", $argv[$i]));
    else
      array_push($array, $argv[$i]);
 }
 sort($array, SORT_STRING);
 foreach ($array as $key)
     echo "$key\n";
?>
