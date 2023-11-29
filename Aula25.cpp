#include <iostream>
#include <iomanip>


void mostrar_quantia(double quantia);
double deposito();
double saque(double quantia);

int main(){
	double quantia = 0;
	int escolha = 0;

	do{	
		std::cout << "**************\n";
		std::cout << "*Banco Online*\n";
		std::cout << "**************\n";
		std::cout << "* 1 - Depositar *\n";
		std::cout << "* 2 - Sacar *\n";
		std::cout << "* 3 - Saldo *\n";
		std::cout << "* 4 - Sair *\n";
		std::cout << "*************************";
		std::cout << "\n\n* Digite sua opçao: ";
		std::cin >> escolha;

		std::cin.clear();
		fflush(stdin);
		
		switch(escolha){
			case 1:
				quantia += deposito();
				mostrar_quantia(quantia);
				break;
			case 2:
				quantia -= saque(quantia);
				mostrar_quantia(quantia);
				break;
			case 3:
				mostrar_quantia(quantia);
				break;
			case 4:
				std::cout << "Vlw, Flw!";
				break;
			default:
				std::cout << "Opçao invalida";
		}
		
	}while(escolha !=4);
	
	
	
	return 0;
}


void mostrar_quantia(double quantia){
		if(quantia < 0){
			std::cout << "Valor Nulo ou Negativo Digite um numero natural positivo\n";	
		}else{
		std::cout << "**Seu saldo e BRL " <<std::setprecision(2)<< std::fixed << quantia <<"**\n";
		}
		
}

double deposito(){
	
	int quantidade = 0;

	std::cout << "Digite quanto voce quer depositar: ";
	std::cin >> quantidade;

	if(quantidade <= 0){
	
		std::cout << "**Valor invalido Deposito Cancelado**\n";
		return 0;
	}else {
		return quantidade;
	}
	
	
}

double saque(double quantia){

	 int quantidade = 0;

	std::cout << "Digite o valor que voce quer sacar: ";
	std::cin >> quantidade;
	if (quantia < quantidade){
		std::cout << "Saldo Insuficiente para saque!\n";
		return 0;
	}
	if (quantia < 0){
		std::cout << "Valor invalido\n";
		return 0;
	}else{
		
		return quantidade;
	}
	
}
