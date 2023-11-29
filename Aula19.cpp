#include <iostream>
#include <ctime>


int main(){
	//Seed de geraçao do modulo rand
	srand(time(NULL));	
	//Rand de 1 a 3 definido por %
	int numero =( rand() % 3)+1;	

	switch(numero){
		case 1:
		    std::cout << "Garrafa quebrada\n";
			break;
		case 2:
			std::cout << "Violao miniatura\n";
			break;
		case 3:
			std::cout << "Atum em lata\n";
			break;
		
	}
	return 0;
}
