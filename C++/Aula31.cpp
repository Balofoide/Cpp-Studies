#include <iostream>

int Pesquisa(std::string array[],int size, std::string element);

int main(){

	int numeros[] = {1,2,3,4,5,6,7,8,9,10};		
	std::string comidas[] = {"Pao","Hamburger","Pizza","Pate","Miojo","Sorvete"};		

	int index;
	std::string meunum;
	
	int tamanho= sizeof(comidas)/sizeof(comidas[0]);

	std::cout << "Digite um elemento para pesquisar\n";
	std::getline(std::cin, meunum);

	index = Pesquisa(comidas,tamanho,meunum);


	if(index != -1 ){
		std::cout << "Meu numero esta no index : " << index<<"\n\n\n";
	}else{
		std::cout << "Meu numero nao esta no array.\n";
	}
	return 0;
}

int Pesquisa(std::string array[],int size, std::string element){

	for(int i = 0 ; i < size ; i++ ){

		if(array[i] == element){
			return i;
		}
	}
	return -1;
}
