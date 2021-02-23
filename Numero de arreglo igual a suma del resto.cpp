#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int numeros[100],n,mayor=0,suma=0;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>numeros[i];
		suma += numeros[i];
		
		if(numeros[i] > mayor ){
			mayor = numeros[i];
		}
	}
	if(mayor == suma-mayor){
		cout<<"El numero mayor es: "<<mayor<<" es la suma de los demas";
	}
	else{
		cout<<"No existe un numero mayor que haga la suma de los demas";
	}
	
	
	
	
	getch();
	return 0;
}
