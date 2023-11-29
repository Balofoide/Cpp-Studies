#include <iostream>

//cout << Operador de inserçao
//cin >> Operador de extraçao

int main(){
	std::string nome;
	int idade;
			// Utilizando apenas o cin nao sera possivel escrever espaços na resposta pois ele so
			// Conseidera-ra a primeira
			// entao utiliza-se uma funçao do std
	std::cout << "Digite seu nome: ";
	std::getline(std::cin >> std::ws, nome); // sem o >> std::ws caso algum valor anterior seja digitado ele sera lido
											 // entao utilize o std::ws para limpar o valor

	std::cout << "Digite sua idade: ";
	std::cin >> idade;



	std::cout << "Ola "<< nome << "\n";
	std::cout << "Voce tem "<<idade << " Anos \n";







	return 0;
}
