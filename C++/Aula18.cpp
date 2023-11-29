#include <iostream>

int main(){

	//break
	//continue

//	for (int i =1; i <=20; i++){

//		if (i== 13){
//			continue;
//		}
//		std::cout << i << "\n";
//	}



	int rows;
	int columns;
	char symbol;

	system("clear");
	std::cout << "\nQuantas linhas: ";
	std::cin >> rows;

	std::cout << "\nQuantas colunas: ";
	std::cin >> columns;

	std::cout << "\nInsira um simbolo: ";
	std::cin >> symbol;


	for(int i=1;i <= rows ; i++){
	
		for(int j=1;j<=columns;j++){

			std::cout << symbol;
			
		}
		
		std::cout << "\n";
	}
	

	return 0;
}
