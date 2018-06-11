#!/usr/bin/php
<?php

$stdin = fopen('php://stdin', 'r');

while ($stdin && !feof($stdin))
{
    echo "Entrez un nombre : ";
    if ($ligne = fgets($stdin))
    {
        $ligne = str_replace("\n", "",$ligne);
        if (!is_numeric($ligne))
            echo "'".$ligne."' n'est pas un chiffre\n";
        else if ($ligne % 2 != 0)
            echo "Le chiffre " .$ligne. " est Impair\n";
        else
            echo "Le chiffre " .$ligne. " est Pair\n";
    }
}
fclose($stdin);
echo "\n";
?>
