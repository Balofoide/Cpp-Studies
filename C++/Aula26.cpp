#include <iostream>
#include <ctime>

char Usuario();
char Oponente();
void Resultado(char escolha);

void Vencedor(char player, char computer);



int main(){

	char player;
	char computer;

	

	player = Usuario();
	
	std::cout << "Sua escolha foi: ";
	Resultado(player);
	
	std::cout << "\n";

	computer = Oponente();

	std::cout << "Escolha do oponente: ";
	Resultado(computer);

	std::cout << "\n";

	Vencedor(player,computer);

	
	return 0;
}





char Usuario(){

	char player;
	do{
	std::cout << "*********************\n";
	std::cout << "*Pedra Papel Tesoura*\n";
	std::cout << "*********************\n";

	std::cout << "[r] Pedra\n";
	std::cout << "[p] Papel\n";
	std::cout << "[s] Tesoura\n\n";

	std::cout << "Escolha uma das opçoes acima: ";
	std::cin >> player;
	std::cout << "\n";

	}while(player != 'r' && player != 'p' && player != 's');


	return player;
}
char Oponente(){

	srand(time(0));
	int num = rand() % 3 + 1;

	switch(num){
		case 1:
			return 'r';
		case 2:
			return 'p';
		case 3:
			return 's';
	}

	return 0;
}
void Resultado(char escolha){


	switch(escolha){


		case 'r':
			std::cout << "Pedra";
			break;
		case 'p':
			std::cout << "Papel";
			break;
		case 's':
			std::cout << "Tesoura";
			break;
		
	}
}

void Vencedor(char player, char computer){

	switch(player){
		case 'r':
			if (computer == 'p'){
				std::cout << "\nO Oponente Venceu!\n";
			}else if (computer == player){
				std::cout << "\nEmpate!\n";
			}
			else{
				std::cout << "\nVoce Ganhou!!\n";
			}
			break;
		case 'p':
			if (computer == 's'){
				std::cout << "\nO Oponente Venceu!\n";
			}
			else if (computer == player){
				std::cout << "\nEmpate!\n";
			}

			else{
				std::cout << "\nVoce Ganhou!!\n";
			}
			break;
		case 's':
				if (computer == 'r'){
				std::cout << "\nO Oponente Venceu!\n";
			}
			else if (computer == player){
				std::cout << "\nEmpate!\n";
			}

			else{
				std::cout << "\nVoce Ganhou!!\n";
			}
		
	}
	
}
