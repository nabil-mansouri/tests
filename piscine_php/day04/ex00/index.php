<?php
session_start();

?>
<!DOCTYPE html>
<html>
<body>
<form action="index.php" method="get">
    <input type="text" name="login" value="<?php if($_GET['login']) echo $_GET['login'];?>"><br>
    <input type="password" name="passwd" value="<?php echo $_GET['passwd'];?>"><br>
    <input type="submit" name="submit" value="OK">
</form>
</body>
</html>