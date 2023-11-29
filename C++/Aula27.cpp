#include <iostream>

int main(){

	//Array = Estutura de dados que consegue armazenar diversos dados de uma vez
	// e sao buscadas por index ex Geladeira[] = "Atum" "Batata" "Arroz"
	//Geladeira[0] = Atum
	//Geladeira[1] = Batata
	//Geladeira[2] = Arroz
	// O primeiro sempre começa em 0


	std::string carros[] = {"Corvete","Mustang","Trueno Panda","Ferrari"};
	
	std::cout << "Carros[0] = " << carros[0] << "\n";
	std::cout << "Carros[1] = " << carros[1] << "\n";
	std::cout << "Carros[2] = " << carros[2] << "\n";
	std::cout << "Carros[3] = " << carros[3] << "\n";


	std::cout << "\n\n\n";
	carros[0] = "Camaro";
	
	std::cout << "Agora Carro[0] e = " << carros[0];
	std::cout << "\n\n\n";

	//Pode se tambem declarar uma array e atribuir os valores depois
	// ex

	std::string carro[3];

	carro[0] = "Corsinha";
	carro[1] = "Chevete";
	carro[2] = "Corola";

	std::cout << "\n";
	//Assim funcionara do mesmo jeito


	double precos[] = {5.00,7.50,9.99,15.00};

	std::cout <<"Preço[0] = " << precos[0] << "\n";
	std::cout <<"Preço[1] = " << precos[1] << "\n";
	std::cout <<"Preço[2] = " << precos[2] << "\n";
	std::cout <<"Preço[3] = " << precos[3] << "\n";
	return 0;
}
