--As variaveis sao detectadas automaticamente tais quais o Python
print("Digite seu nome:")
nome=io.read()
--Para fazer um input no console se utiliza a funçao "io.read()"
print("Digite um numero:")
n1=io.read("*number")
--[[Para converter um valor de input e passado o tipo da variavel
junto de um *

Ex: *number
    *string
    *boolean
--]]
print("Digite outro numero:")
n2=io.read("*number")

n3 = n1+n2

print(nome.." A soma entre "..n1.." e "..n2.." e igual a: "..n3)

--Para concatenar usa-se ".." para dar espaço utiliza-se ","
