#include <iostream>
#include <stdlib.h>



//Operadores Ternarios servem para substituir if/elseç;
int main(){
	//Ternario Condiçao ? Codigo 1: Codigo 2

	int manga = 9;
	int number = 9;
	bool fome = true;

	
	//Quando o valor for bool ou retornar apenas 1 e 0 os ternarios ja reconhecem como verdadeiro e falso fazendo nao ser necessario comparaçao
	
//	fome ? std::cout <<"Esta com fome"<<std::endl : std::cout <<"Esta Cheio"<<std::endl;
	std::cout <<(fome ? "Esta com fome": "Esta Cheio")<<std::endl;	 //Outro metodo e chamar direto no output para economizar linha


	number % 2  ? std::cout<<"IMPAR"<<std::endl : std::cout <<"PAR" << std::endl;


	manga >= 10 ? std::cout<<"Voce tem 10 mangas."<<std::endl:std::cout<<"Voce nao tem 10 mangas."<<std::endl;

	return 0;
	
}

