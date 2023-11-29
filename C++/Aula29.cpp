#include <iostream>


int main(){


	std::string estudantes[] = {"Jagaima","Saki","Gamm","Nootz"};
	char notas[] = {'A','B','C','D','E','F'};

	for(int i = 0;i < sizeof(notas)/sizeof(notas[0]);i++){

		std::cout << notas[i] << "\n";
	}

	//foreach loop 'e uma versao do for loop mais simples que e feito para arrays'


	for (std::string estudante: estudantes){//Diferente do for normal esse mostra todos os item de um array

		std::cout << estudante << "\n";
	}
	return 0;
}
