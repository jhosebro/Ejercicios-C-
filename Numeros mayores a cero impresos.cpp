#include<iostream>
#include<stdlib.h>


using namespace std;


int main(){
	
	int numero,conteo=0;
	
	do{
		cout<<"digite un numero: ";
		cin>>numero;
		if(numero>0){
			conteo++;
		}
	}while(numero != 0);
	
	cout<<"El numero de valores ingresados mayor a cero son: "<<conteo<<endl;
	
	
	
	
	cout<<"\n \n";
	system("pause");
	return 0;
}
