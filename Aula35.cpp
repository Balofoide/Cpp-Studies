#include <iostream>


int main(){


	std::string carros[][3] = {{"Corvete","Mustang","Corsa"},
							  {"Ferraria","Porsh","Corola"},
							  {"Camaro","Puma","Martra"}};


	int rows = sizeof(carros)/sizeof(carros[0]);
	int colums = sizeof(carros[0])/sizeof(carros[0][0]);

	for(int i = 0;i<rows;i++){
		for(int j =0;j < colums;j++){
			std::cout<<carros[i][j]<< "\n";
		}
		std::cout << "\n";
	}

	
	return 0;
}
