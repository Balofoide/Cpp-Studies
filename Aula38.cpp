#include <iostream>



void swap(std::string &x, std::string &y);
//Quando se usa funões que utilizam uma variavel, apenas uma copia
//Da variavel é feita,
//Caso queira mudar a variavel original
//Deve-se passar o endereço da memoria da variavel
//Assim ele fará as alteraçẽs na propia variavel original

int main(){

	std::string x = "Kool-Aid";
	std::string y = "Water";
	std::string temp;
	
	swap(x,y);
	
	std::cout << "X: " << x << "\n";
	std::cout << "Y: " << y << "\n";


	return 0;
}
//&x se refere a variavel x , ou seja isso está ligado diretamente a 
//variavel original
void swap(std::string &x, std::string &y){

	std::string temp;
	temp = x;
	x=y;
	y=temp;	
}
