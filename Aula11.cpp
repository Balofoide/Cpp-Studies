#include <iostream>


int main(){

	//switch e uma alternativa a ocasioes onde precias de muitas comparaçoes simples


	int mes;

	std::cout << "Digite um mes: ";
	std::cin >> mes;

	switch(mes){
		case 1:
			std::cout <<"Janeiro \n";
			break;
		case 2:
			std::cout << "Fevereiro \n";
			break;
		case 3:
			std::cout << "Março \n";
			break;
		case 4:
			std::cout << "Abril \n";
			break;
		case 5:
			std::cout << "Maio \n";
			break;
		case 6:
			std::cout << "Junho \n";
			break;
		case 7:
			std::cout << "Julho \n";
			break;
		case 8:
			std::cout << "Agosto \n";
			break;
		case 9:
			std::cout << "Setembro \n";
			break;
		case 10:
			std::cout << "Outubro \n";
			break;
		case 11:
			std::cout << "Novembro \n";
			break;
		case 12:
			std::cout << "Dezembro \n";
			break;
		default:
			std::cout << "Digite apenas numeros de (1 - 12) \n";
			break;
	}

	char nota;

	std::cout << "Digite sua nota: ";
	std::cin >> nota;

	switch(nota){
		case 'S':
			std::cout << "Nota Perfeita!!! \n";
			break;
		case 'A':
			std::cout << "Otima nota!! \n";
			break;
		case 'B':
			std::cout << "Nota acima da media! \n";
			break;
		case 'C':
			std::cout << "Nota Mediana \n";
			break;
		case 'D':
			std::cout << "Nota abaixo da media!! \n";
			break;
		case 'F':
			std::cout << "Pessima nota!!! \n";
			break;
		default:
			std::cout << "Digite apenas notas entre (A - F) \n";
			break;
	}



	return 0;
}
