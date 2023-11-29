
#include <iostream>

//While loops

int main(){

	std::string nome;
	//While = Enquanto
	// Enquanto nome for vazio Faça:
	while(nome.empty()){
		std::cout << "Digite seu nome: ";
		std::getline(std::cin, nome);
	}

	std::cout << "Bem-Vindo(a) "<< nome<<std::endl;


	//Do While

	int numero;


	do{
		std::cout << "Digite um numero positivo: ";
		std::cin >> numero;
	}while (numero < 0);

	std::cout << "Seu numero e: " << numero << std::endl;



	//For loop


	for (int i=0;i <=10 ;i++){
		std::cout << "Where are you. "<< i << std::endl;
	}
	
	
	return 0;
}
