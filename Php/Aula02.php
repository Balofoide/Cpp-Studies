<?php

// Operadores Aritimeticos.

// + - Adicao
// - - Subitracao
// * - Multiplicacao
// / - Divisao
// ** - Potencia
// % - Resto de divisao


$soma = 10+10;
$sub = 10 - 10;
$mul = 10 * 10;
$div = 10 / 10;
$pot = 10 ** 10;
$res = 10 % 10;

echo "<h1> Operadores </h1>";
echo "<p> Soma : 10 + 10 = {$soma} <br>";
echo "<p> Subtracao : 10 - 10 = {$sub}";
echo "<p> Multiplicacao : 10 * 10 = {$mul}";
echo "<p> Divisao : 10 / 10 = {$div}";
echo "<p> Potenciacao : 10 ** 10 = {$pot}";
echo "<p> Resto : 10 % 10 = {$res}";


echo "<h1> Incrementadores </h1>";
// Operadores de incremento e decremento:

// ++ - Incrementa em 1
// -- - Decrementa em 1

$contador = 0;
$contador += 3;
$contador--;

echo "Contador {$contador}<br>";

echo "<h1>Equacoes </h1>";
// Operadores de expressao 
// A ordem segue a regra da matematica

$x = 10;
$y = 10;

$total = $x - $y * 2 / 2 ** 2;

echo "Resultado de x - y * 2 / 2 ** 2 = {$total}";

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aula02</title>
</head>
<body>
    
</body>
</html>