#include <iostream>
#include <ctime>
int main(){

	int num;
	int guess;
	int tries;

	srand(time(NULL));

	num = (rand() % 100) + 1; 

	std::cout << "-Guess game-\n\n";


	do{
		std::cout << "Digite um numero de 1-100: ";
		std::cin >> guess;
		tries++;
		
		if(guess > num){
			std::cout << "Muito alto!\n";
		}
		else if(guess < num){
			std::cout << "Muito Baixo!\n";
		}
		else{
			std::cout <<"Parabens voce acertou em " << tries <<" Tentativas!\n";
		}
		
	}while(guess != num);
	
 
	return 0;
}
