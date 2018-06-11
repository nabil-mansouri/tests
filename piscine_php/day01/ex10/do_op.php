#!/usr/bin/php
<?php

if ($argc != 4)
    exit("Incorrect Parameters\n");

$nbr1 = trim($argv[1]);
$nbr2 = trim($argv[3]);
$op = trim($argv[2]);

switch ($op)
{
    case "+":
        echo $nbr1 + $nbr2;
        break ;
    case "-":
        echo $nbr1 - $nbr2;
        break ;
    case "*":
        echo $nbr1 * $nbr2;
        break ;
    case "/":
        echo $nbr1 / $nbr2;
        break ;
    case "%":
        echo $nbr1 % $nbr2;
        break ;
}

echo "\n";