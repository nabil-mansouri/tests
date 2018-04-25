<?php
function ft_split($str)
{
    $array = explode(" ",$str);
    sort($array, SORT_STRING);
    return $array;
}
?>
