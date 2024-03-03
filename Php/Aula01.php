<!-- PHP Section -->

<?php

// Comentarios em PHP sao feitos utilizando dois //

/* Tambem e possivel fazer comentarios de varias linhas 

Php e util pois pode conter HTML CSS e JS junto do propio PHP no mesmo arquivo.

Variaveis: Espacos na memoria que guardam tipos de dados.
- String
- Interger
- Float
- Boolean

Para declara uma variavel em php utiliza-se da seguinte syntax:

$nome = "Balofoide";

*/


// Assim como python as variaveis sao dinamicas 
// ou seja elas sao atribuidas dependendo de qual valor elas contem:

$nome = "Balofoide"; // String

$idade = 20; // Int 

$chance = 2.5; // Float
$preco = 3.80; // Float

$alive = true; // Boolean 
// Valores boolan falsos nao exibem nada, porem true exibe 1

$total = $chance * $preco;


// Com {} e possivel inserir codigos de php dentro de strings.
echo "<h3>Bem Vindo {$nome}</h3>";
echo "Quando os {$idade} anos viraram apenas um <br>{$chance}% da humanidade restou.";

// Para usar $ sem que o PHP interprete como codigo e preciso escapar ele utilizando \ 
echo "<br> E tudo custou-lhes apenas \${$total}";

// echo "<h1>Memento Mori</h1>";
echo "<br><br><h4>The Bird Of Hermes</h4>";
?>









<!-- HTML Section -->

<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aula 01</title>
</head>
<body>
    <p>The Bird of Hermes is my name<br>

Eat my wings to keep me tame<br>

 <br>

From the bodies blood is shed<br>

Soon the ghouls become undead<br>

The Bird of Hermes comes soon<br>

Not morning, evening or afternoon<br>

The Bird of Hermes feeds on fright<br>

Soon blood shall stain the night<br>

The Bird of Hermes will devour<br>

His enemies at midnight hour<br>

 <br>

The Bird of Hermes is my name<br>

Eat my wings to keep me tame<br>

 <br>

The night shall soon be stained with red<br>

You and your army lay bleeding and dead<br>

Your bodies shall rise soon<br>

And join The Bird’s platoon<br>

You shall learn to live in night<br>

You ghouls are made to fight<br>

The stench of blood is ever sour<br>

The Bird’s enemies shall cower<br>

 <br>

The Bird of Hermes is my name<br>

Eat my wings to keep me tame</p>
</body>
</html>