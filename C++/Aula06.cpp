#include <iostream>


int main(){

	//Conversao de tipo, ha dois tipos de conversao sendo elas 
	 //Explicita: Atribui o valor a um novo tipo 
	 //Implicita: Automatica


	//int x = (double)3.14; 
	//char y = 100;



	int questions = 10;
	int correct = 8;

	//Aqui esta sendo feito o calculo de quantos % das questoes foram acertadas 
	//Se no caso a variavel questions nao fosse convertida em double retornaria 0%
	//Pois ia trunkar os decimais da divisao fazendo 0 ser multiplicador por 100 que retornaria 0
	double score = correct/(double)questions * 100;

	std::cout<<"A prova teve " << score << "%" << " De acerto \n";

	return 0;
}

