#include <iostream>


int main(){

	std::string questions[]={"Qual o criador de This is You Luck Day ?: ",
							"Qual o nome da entidade mais poderosa de TYLD?: "
							,"Qual a data de lançamento de TYLD ?: "};

	std::string options[][4]={
	{"A: Balofoide","B: Jorge","C: Gamm","D: Nootz"},
	{"A: L.A.C.K","B: Z0","C: Balofoide","D: C0"},
	{"A: 2023","B: 2030","C: 2031","D: 2022"}
	};
	
				
	char certas[]={'A','A','B'};

	int size = sizeof(questions)/sizeof(questions[0]);
	char guess;
	int score;


	for(int i =0 ; i < size; i++){
		std::cout << "*************************************\n";
		std::cout << questions[i] << "\n";
		std::cout << "*************************************\n";
		
		for(long unsigned int j =0; j < sizeof(options[i])/sizeof(options[i][0]) ; j++){
			
			std::cout << options[i][j] << "\n";
		}

		std::cout << "\nOpçao: ";
		std::cin >> guess;

		guess = toupper(guess);


		if(guess == certas[i]){
			std::cout << "CORRECT\n\n";
			score++;
			
		}else{
			std::cout << "WRONG\n\n";
			std::cout << "ANSWARE: " << certas[i]<<"\n"; 
		}
		std::cout << "*************************************\n";
		std::cout << "RESULTS:\n";
		std::cout << "*************************************\n";
		std::cout << "CORRECT GUESSES: " << score << "\n";
		std::cout << "# OF QUESTIONS: " << size << "\n";
		std::cout << "SCORE: " << (score/(double)size)*100 << "%\n";
			}
	
	return 0;
}
