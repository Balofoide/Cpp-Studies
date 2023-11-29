#include <iostream>

void pegarpizza();
void pegarpizza(std::string recheio1);
void pegarpizza(std::string recheio1,std::string recheio2);
int main(){
	
	
	pegarpizza();
	pegarpizza("Atum");	
	pegarpizza("Peperoni","Quejo");

	return 0;
}


void pegarpizza(){
	std::cout << "Aqui ta sua pizza!\n";
}

void pegarpizza(std::string recheio1){

	std::cout << "Aqui ta sua pizza com " << recheio1 <<"\n";
	
}

void pegarpizza(std::string recheio1,std::string recheio2){

	std::cout << "Aqui ta sua pizza com " << recheio1 <<" com "<< recheio2<<"\n";
	
}
