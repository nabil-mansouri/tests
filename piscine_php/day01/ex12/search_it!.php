#!/usr/bin/php
<?php

if ($argc < 3)
    exit();
foreach ($argv as $elem)
{
    if ($elem == $argv[1])
        continue ;
    $array = explode(":", $elem);
    if (!strcmp($array[0], $argv[1]))
        $res = $array[1];
}
if ($res)
    echo $res."\n";
