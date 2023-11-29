#include <iostream>
#include <stdlib.h>


// Nao recomendado usar no std pois desativa muitas funçoes iguais que contem no c++
			//using namespace std;
//utilize a funçao especifica no lugar
using std::cout;
using std::string;
using std::endl;

//namespaces sao utilizadas em situaçoes onde e necessario utilizar os mesmos nomes sem criar conflito

namespace first{
	int x = 1; // Na namespace "first" x equivale a 1 logo quando eu chamar a namespace com a variavel voltara esse valor
}
namespace second{
	int x = 2;
}


int main(){
	
	int x = 4;

//Para utilizar uma namespace voce deve por seu nome seguido de duas colunas ::
	cout << "Primeira Namespace: x=" << first::x << endl;
	
	cout << "Segunda Namespace: x=" << second::x << endl;
//Caso nao seja representada qual namespace utilizar ele utilizara o valor local
	cout << "Valor local: x=" << x << endl;

	
	return 0;
}
