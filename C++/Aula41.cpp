#include <iostream>


int main(){

	//Ponteiros são variaveis que guardam o endereço na memoria de outra variavel

	//& Adress-of operator
	
	//* deference operator




	//Variaveis Comuns
	std::string nome = "Balofoide";
	int idade = 20;
	std::string pizzas[5] = {"Pizza 1","Pizza 2", "Pizza 3","Pizza 4","Pizza 5"};



	//Ponteiros atribuidos as variaveis 
	//O ponteiro é criado com a utilização do operador *
	//E o endereço referido da variavel é definido pelo operador &
	std::string *pNome = &nome;
	int *pIdade = &idade;
	std::string *pPizzas = pizzas;

	//Quando chamado pelos operadores, irá retornar o valor contido na memoria que foi atribuido pela variavel comum
	std::cout << *pNome << "\n";
	std::cout << *pIdade << "\n";
	std::cout << *pPizzas << "\n";


	return 0; 
}
