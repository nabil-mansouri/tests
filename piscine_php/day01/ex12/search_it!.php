#!/usr/bin/php
<?php

$key = $argv[1];

foreach ($argv as $elem)
{
    if ($elem == $key)
        continue ;
    if (strstr($elem, $key))
        $res = substr($elem, strlen($key) + 1);
}
echo $res;
