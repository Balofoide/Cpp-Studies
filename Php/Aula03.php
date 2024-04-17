<?php

// GET e POST

// $_GET, $_POST = Variaveis especiais feitas para manipular dados vindos de um formulario
// HTML os dados sao enviados atraves do atributo <form action="arquivo.php" method="get">

// $_GET = Os dados sao enviados atraves da url
// Nao e seguro
// Limite de caractere
// Possivel Bookmark
// GET pode ser guardado em cache



// $_POST = Data e enviada pelo corpo do request HTTP 
// Mais seguro
// Sem limite de caractere
// Sem Bookmark
// GET nao pode ser guardado em cache
// Melhor para credenciais

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aula03</title>
</head>
<body>
    <h1>Get & Post</h1>

    <h2> GET </h2>
    <form action="Aula03.php" method="GET">
        <lable>GET</lable>
        <input type="text"> 
        <button>Enviar</button>
    </form>

    <h2> POST </h2>
    <form action="Aula03.php" method="POST">
        <lable>POST</lable>
        <input type="text"> 
        <button>Enviar</button>
    </form>

</body>
</html>