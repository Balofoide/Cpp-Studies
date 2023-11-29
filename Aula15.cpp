#include <iostream>


int main(){
	char unidade;
	double temp;
	double conv;
	
	std::cout << "--Conversor de C° Para F°--\n";
	
	std::cout << "\nF - F°";
	std::cout << "\nC - C°";
	std::cout << "\nDigite sua escolha: ";
	std::cin >> unidade;


	if(unidade == 'F' || unidade == 'f'){

		std::cout << "Digite o numero a ser convertido em Farenheight: ";
		std::cin >> temp;
		conv = (temp*1.8)+32;

		std::cout <<std::endl <<temp <<"C° em F°: " << conv << std::endl;

	}else if (unidade == 'C' || unidade == 'C'){
		std::cout << "Digite o numero a ser convertido em Celcius: ";
		std::cin >> temp;
		conv = (temp - 32) /1.8;

		std::cout<<std::endl <<temp << "F° em C°: " << conv << std::endl;
	}
		
	return 0;  
}
