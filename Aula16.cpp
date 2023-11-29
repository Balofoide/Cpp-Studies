#include <iostream>

int main(){
	std::string nome;

	std::cout << "Digite seu nome: ";
	std::getline(std::cin, nome);

	//length() = le o tamanho da variavel.
	if(nome.length() > 12){
		std::cout << "\nSeu nome nao pode ter mais que 12 caracteres." << std::endl;
	}
	
	//empty() = Verifica se a variavel esta vazia 
	//so pode retornar verdadeiro ou falso
	
	else if (nome.empty()){
		std::cout << "\nNomes vazios nao sao aceitos\n";
	}

	else{
		//clear() = limpa o valor da variavel
		//append() = junta outro texto ex nome = jorge    nome.append("@gmail.com")
		//at() = retorna a posiçao do valor ex nome.at(0) = j
		//insert() = insere o valor na casa
		//find() = mostra o local do valor 
		//erase() = 
 		std::cout << "\nBem-Vindo(a).\n"<< nome <<std::endl;
		
	}	
}
