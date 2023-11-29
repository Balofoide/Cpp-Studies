#include <iostream>

int globo = 1;

void scope();

int main(){

	int globo = 2;
		
	std::cout << "Local: " <<globo << "\n";
	std::cout <<"Global: " << ::globo << "\n"; //Para chamar o valor de uma variavel global basta utilizar :: caso nao tenha outra 
											   //Variavel com o mesmo nome no local ela pegara automaticamente a global.
	std::cout << "Funçao: ";
	scope();
	return 0;
}

void scope(){
	int globo =3;

	std::cout << globo << "\n";
}
