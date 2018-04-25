#!/usr/bin/php
<?php
echo "Entrez un nombre : ";
while ($ligne = trim(fgets(STDIN)))
{
    if (! is_numeric($ligne))
    echo "'".trim($ligne)."' n'est pas un chiffre\n";
    elseif ($ligne % 2 != 0)
    echo "Le chiffre ".trim($ligne)." est Impair\n";
    else
    echo "Le chiffre ".trim($ligne)." est Pair\n";
    echo "Entrez un nombre : ";
}
?>
