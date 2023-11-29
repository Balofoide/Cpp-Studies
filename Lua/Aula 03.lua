text1 ="I like Coffe"
text2 ="I like Cookies"
text3 ="I Hate Milk"


--[[
string.gsub e uma funçao de substituiçao onde o <valor1> e substituido pelo parametro 
EX:
string.gsub(<Valor a ser modificado>,"Valor a ser substituido",<Novo Valor>)
--]]

print("------------------------------")
aux = string.gsub(text1,"Coffe",text2)
print(aux)

--[[
Diferente de outras linguagens o lua tem o propio operador para 
Len()

em vez de len() utiliza-se "#" 

EX:
print(#texto)
--]]

print("------------------------------")
print("\nO tamanho da variavel e: "..#text1)

--[[
  \a Campainha
  \b Backspace
  \f Alinhamento de Formulario
  \n Quebra de linha
  \r Retorno de Carro
  \t Tabulaçao Horizontal
  \v Tabulaçao Vertical
  \\ Barra invertida
  \' Aspostrofo
  \" Aspas
]]

site = [[

<html>
    <body>
        <h1>Olha que site legal</h1>
    </body>
</html>
]]

io.write(site)