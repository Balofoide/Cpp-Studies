#include <iostream>


int main(){
	
	std::string comidas[5];
	std::string temp;
	int size = sizeof(comidas)/sizeof(comidas[0]);

	for(int i = 0; i < size ; i++){
		
		std::cout << "Digite o nome da comida ou 'q' #"<< i <<" :";
		std::getline(std::cin, temp);
		
		if(temp == "q"){
			break;
		}else{
			comidas[i] = temp;
		}
		
	}
	std::cout << "\n\n\n";
	for(int i = 0; !comidas[i].empty(); i++){

		std::cout << "#" << i << "------->" << comidas[i] << "\n";
	}

	
	

	return 0;
}
