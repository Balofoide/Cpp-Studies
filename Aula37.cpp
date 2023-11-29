#include <iostream>



int main(){

	// Endereço de memoria e o local da memoria ram onde fica alocado as informaçoes rodadas pelo codigo 
	// O endereço da memoria pode ser acessado usando o operador & 


	std::string name = "Balofoide";
	int age = 20;

	bool student = true;


	std::cout << &name << "\n"; // Endereço de memoria da variavel name;
	std::cout << &age << "\n"; // Endereço de mmeoria da variavel age;
	std::cout << &student << "\n";// Endereço de memoria da variavel student;
	return 0;
}
