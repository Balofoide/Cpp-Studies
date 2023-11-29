#include<iostream>

int main(){

	int idade;

	std::cout << "Digite sua idade: ";
	std::cin >> idade;

	if(idade >= 18 && idade < 100){
		std::cout << "Bem vindo ao site" << "\n";
		
	}
	else if(idade >=100){
		std::cout << "Voce e velho demais para o site \n";
	}
	else if(idade <= 0) {
		std::cout << "Voce nao nasceu ainda \n";
		
	}
	else{
		std::cout << "Voce e menor de 18 anos \n";
	}

	return 0;
}
