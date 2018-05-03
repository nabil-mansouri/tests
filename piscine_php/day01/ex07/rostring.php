#!/usr/bin/php
<?php
include "../ex03/ft_split.php";
$tab = explode(" ", preg_replace('!\s+!', ' ', trim($argv[1])));
$tab2 = [];
foreach ($tab as $key => $elem)
{
    if ($key == 0)
        continue ;
    array_push($tab2, $elem);
}
$tab2[count($tab2)] = $tab[0];
echo implode(" ", $tab2);