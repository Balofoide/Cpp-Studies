#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	//Para declarar Constantes em c++ usa-se const 
	//Costantes nao podem ser modificadas 
	
	const double PI = 3.14159;
	const int LIGHT_SPEED = 299792458;
	const int WIDHT = 1920;
	const int HEIGHT = 1080; 
	
	double raio = 10;
	double circu = 2 * PI * raio;
	
	cout << circu << "cm" <<endl;
		
	
	return 0;
}
