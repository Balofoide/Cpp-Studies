#include <iostream>

double getTotal(double precos[],int size);

int main(){
	double precos[] = {10.99,11.99,5.99};
	int size = sizeof(precos)/sizeof(precos[0]);



	double total =getTotal(precos, size);


	std::cout << "R$: " << total << "\n";
	return 0;
}

double getTotal(double precos[],int size){

	double total = 0;

	for(int i = 0 ; i < size ; i++){

		total += precos[i];
	}
	return total;	

	
}
