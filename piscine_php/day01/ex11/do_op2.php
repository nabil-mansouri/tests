#!/usr/bin/php
<?php

if ($argc != 2)
    exit("Incorrect Parameters\n");

if (!preg_match("/^ *(-?[0-9]+) *([\+\-\*\/\%]) *(-?[0-9]+) *$/", $argv[1], $match))
    exit("Syntax Error\n");

$nbr1 = $match[1];
$nbr2 = $match[3];
$op = $match[2];

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