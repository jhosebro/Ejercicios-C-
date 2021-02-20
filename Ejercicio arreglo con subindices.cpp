#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int numeros[100],n;
	
	cout<<"Digite el numero de elementos para el arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";
		cin>>numeros[i];
	}
	
	//Mostramos los numero con indices asociados
	
	for(int i=0;i<n;i++){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	
	
	getch();
	return 0;
}
