#include <iostream>

void niver(std::string name,int age);

int main(){
	//Funçao passada por usuario.


	std::string name = "Balofoide";
	int age = 21;

	niver(name, age);
	
	
	
	
	
	return 0;
}

void niver(std::string name,int age){
	
	
	std::cout << "Feliz Aniversario! " << name <<"\n";
	std::cout << "Pelos " << age <<" Anos\n";	 
}
