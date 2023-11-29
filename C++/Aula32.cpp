#include <iostream>
	//Codigo para arrumar em ordem uma array.
void Arrumar(int numeros[],int size);
int main(){


	int numeros[] = {9,2,5,3,4,1,8,7,6,10};
	int size = sizeof(numeros)/sizeof(numeros[0]);

	Arrumar(numeros,size);
	for(int element : numeros){

		std::cout << element << " ";
		
	}

	
	return 0;
}

void Arrumar(int numeros[],int size){

	int temp;

	for (int i = 0 ; i < size - 1 ; i++){
		for(int j = 0; j < size - i -1 ; j++){

			if(numeros[j] > numeros[j +1]){
				temp = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j + 1] = temp;
			}
		}
	}
}
