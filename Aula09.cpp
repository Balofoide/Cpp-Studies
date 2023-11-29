#include <iostream>
#include <cmath>


int main(){

	double a;
	double b;
	double c;


	std::cout << "Digite o valor de A: ";
	std::cin >> a;

	std::cout << "Digite o valor de B: ";
	std::cin >> b;

	c = sqrt(pow(a,2)+pow(b,2));

	std::cout << "A Hipotenusa mede: " << c << " cm\n";

	return 0;
}
