#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	
	int numeros[] = {1,2,3,4,5};
	int multiplicacion = 1;
	
	for(int i=0;i<5;i++){
		multiplicacion *= numeros[i];
	}
	
	
	cout<<"El resultado de la multiplicacion acumulada de elementos es: "<<multiplicacion<<endl;
	
	
	system("pause");
	return 0;
}
