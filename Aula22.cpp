#include <iostream>


double square(double lenght);
double cube(double lenght);
std::string concat(std::string nome, std::string sobrenome);

int main(){

	//Return = Volta o valor para a propia funçao dando o resultado dela como esse valor.


	double lenght = 6.0;
	double area = square(lenght);
	double volume = cube(lenght);
	
	std::cout << "A area e de: " << area <<"cm²\n";
	std::cout << "O volume e de: " << volume << "cm³\n";


	std::string nome = "Vinicius Santos";
	std::string sobrenome= "Chavito";
	std::string nomec = concat(nome,sobrenome);
	std::cout << "Seu nome completo e: " << nomec << "\n";
	return 0;
}

double square(double lenght){

	return lenght * lenght;
}
double cube(double lenght){
	return lenght * lenght * lenght;
}
std::string concat(std::string nome,std::string sobrenome){

	return nome + " " + sobrenome;
}
