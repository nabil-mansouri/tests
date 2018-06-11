<?php
try
{
    $bdd = new PDO('mysql:host=localhost;dbname=test;charset=utf8', 'root', 'root');
}
catch (Exception $e)
{
    die('Erreur : ' . $e->getMessage());
}

$req = $bdd->prepare('SELECT * FROM jeux_video WHERE possesseur = ? AND prix < ?' );
$req = $bdd->execute(array($_GET['possesseur'], $_GET['prix']));
echo '<pre>';
print_r($req->fetch());

?>
