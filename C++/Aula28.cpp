#include <iostream>

int main(){

	//sizeof() Retorna o tamanho da variavel/funçao em bytes

	double gpa = 2.5;
	std::string nome= "Balofoide";
	char nota = 'F';
	bool apv = false;
	char notas[] = {'A','B','C','D','E','F'};
	
	std::string estudantes[] = {"Bob Esponha","Patrick","Lula Molusco","Sandy"};

	
	std::cout << sizeof(nome) << " bytes\n";
	std::cout << sizeof(gpa) << " bytes\n";
	std::cout << sizeof(nota) << " bytes\n";
	std::cout << sizeof(apv) << " bytes\n";
	std::cout << sizeof(notas) << " bytes\n";
	
	std::cout << sizeof(notas)/sizeof(char) << " Elements\n";

	std::cout << sizeof(estudantes) << " bytes\n";
	std::cout << sizeof(estudantes)/sizeof(estudantes[0]) << " Estudantes\n";
	return 0;
}
