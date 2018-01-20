<?php
    if(isset($_POST["enviar"])) {
        $id = $_POST["id"];
        $nombre = $_POST["nombre"];
        $correo = $_POST["correo"];
        $password = $_POST["password"];

       $mysqli = new mysqli("localhost","id3799910_root","admin123","id3799910_users");
        $consulta = "UPDATE usuarios SET nombre = '$nombre',correo = '$correo',password = '$password' WHERE id = $id";

        $resultado = $mysqli->query($consulta);
    }
?>