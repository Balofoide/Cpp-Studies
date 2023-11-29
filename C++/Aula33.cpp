#include <iostream>


int main(){

	//Funçao Fill() Enche um escopo de elementos com valores especificos
	//Fill(begin,end,value)

	const int SIZE = 99;
	std::string foods[SIZE];

	fill(foods,foods+(SIZE/3)  ,"Pizza");
	fill(foods+(SIZE/3),foods+ (SIZE/3)*2 ,"Hamburguer");
	fill(foods+(SIZE/3)*2,foods+ SIZE ,"Churros");
	for(std::string food : foods){

		std::cout << food << "\n";
	}
	return 0;
}
