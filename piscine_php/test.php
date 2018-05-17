#!/usr/bin/php
<?php
$binarydata = "\xa7\x00\xa0\x00";
$array = unpack("hchars/nint", $binarydata);
print_r($array);