#include <iostream>


int main(){
	//Pointeiros Nulos = um valor especial que siginifca que algo não tem valor algum.
	//Quando um ponteiro é nulo ele não aponta para nada

	//nullptr = palavra-chave para um ponteiro nulo literal

	//Ponteiros nulos são uteis quando determinado endresso de memoria foi atribuido com sucesso ao um ponteiro


	int *pointer = nullptr;
	int x = 123;

 	pointer = &x;

	if(pointer == nullptr){

		std::cout << "Endereço não atribuido";
		
	}else {
		std::cout << "Endereço Atribuido";
	};

	return 0;
}
