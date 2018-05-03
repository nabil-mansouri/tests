#!/usr/bin/php
<?php

$array = [];
$letters = [];
$numbers = [];
$chars = [];
$i = 0;

while (++$i < $argc)
      $array = array_merge($array, explode(" ", $argv[$i]));

foreach ($array as $elem)
    if (ord($elem) >= 48 && ord($elem) <= 57)
        array_push($numbers, $elem);
    else if (ctype_alpha(substr($elem, 0, 1)))
        array_push($letters, $elem);
    else
        array_push($chars, $elem);
    
sort($numbers, SORT_STRING);
sort($chars);
natcasesort($letters);

foreach ($letters as $elem)
    echo $elem."\n";
foreach ($numbers as $elem)
    echo $elem."\n";
foreach ($chars as $elem)
    echo $elem."\n";
?>