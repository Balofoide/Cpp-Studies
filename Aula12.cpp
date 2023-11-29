#include <iostream>

int main(){

	char op;
	double numero1;
	double numero2;
	double resultado;

	std::cout << "************************ \n";
	std::cout << "*******CALCULATOR******* \n";
	std::cout << "************************ \n";
	std::cout << "Utilize apenas : | + | - | * | / | \n \n";

	std::cout << "Digite o primeiro numero: ";
	std::cin >> numero1;

	std::cout << "\nDigite a operaçao: ";
	std::cin >> op;
		
	std::cout << "\nDigite o segundo numero: ";
	std::cin >> numero2;
	
	switch(op){
		case '+':
			resultado = numero1 + numero2;
			break;
		case '-':
			resultado = numero1 - numero2;
			break;
		case '*':
			resultado = numero1 * numero2;
			break;
		case '/':
			resultado = numero1 / numero2;
			break;
		default:
			std::cout << "Operaçao invalida digite apenas as seguintes operaçoes (+,-,*,/)\n";
	}

	std::cout << numero1 << op << numero2 << " = " << resultado << "\n";

	return 0;
}
