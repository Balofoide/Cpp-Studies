#include <iostream>
#include <stdlib.h>
#include <vector>

//typedef cria um alias para conjunto complexo de instruçoes tais como
//typedef std::string text_t;
//Basicamente aqui esta sendo atribuido a funçao do std string para print_t entao ao inves de chamar std::string pode ser usado apenas print_t
//Porem um metodo mais eficiente de se utilizar e com a funçao using que faz o mesmo efeito

using text_t = std::string;
using number_t = int;

int main(){

	number_t num = 20;
	text_t exemplo  = "Variavel de texto simplificada pelo using";

	std::cout << "Um otimo exemplo de " << exemplo << "\n";
	std::cout << "Outro exemplo e utilizando numeros " << num << " <- Tal como esse numero foi utilizado \n";
	
	return 0;
}
//Em resumo typedef ou using cria um apelido para um tipo de dado
