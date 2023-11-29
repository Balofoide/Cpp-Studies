#include <iostream>

int main(){


	//Operadores logicos
	//&& = Verifica se condiçao anterior "E" a proxima operaçao e satisfeita
	//"E"

	//||= Verifica se pelomenos uma condiçao e satisfeita
	//"OU"
	
	//! = Inverte o valor da operaçao
	//Nao
	
	int temp;
	bool sol =false;

	std::cout << "Digite a temperatura: ";
	std::cin >> temp;

	if(temp > 0 && temp < 30){

		std::cout << "Temperatura boa\n";
		
	}else {
		std::cout << "Temperatura ruim\n";
	}

	if (!sol){
		std::cout << "Ta fazendo sol la fora\n";
	}else{
		std::cout << "Esta dublado la fora\n";
	}
	return 0;	
}
