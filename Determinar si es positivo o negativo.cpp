#include<iostream>

using namespace std;

int main(){
	
	int numero;
	
	cout<<"Digite el numero a evaluar: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero<0){
		cout<<"El numero es negativo";
	}
	else{
		cout<<"EL numero es positivo";
	}
	
	return 0;
}
