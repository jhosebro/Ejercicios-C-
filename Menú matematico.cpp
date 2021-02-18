#include<iostream>

using namespace std;

int main(){
	
	int opc,num2;
	float num,operacion_cubo = 0;
	
	cout<<"\tBienvenido al menu matematico"<<endl;
	cout<<"1.Elevar al cubo un numero"<<endl;
	cout<<"2.Saber si un numero es par o impar"<<endl;
	cout<<"3.Salir"<<endl;
	cout<<"Opcion: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Digite el numero para elevar al cubo: ";
			cin>>num;
			operacion_cubo = num*num*num;
			cout<<"\nEl numero elevado al cubo es: "<<operacion_cubo<<endl;break;
		case 2:
			cout<<"Digite el numero a evaluar si es par o no: ";
			cin>>num2;
				if(num2%2 == 0){
					cout<<"El numero es par";
				}
				else{
					cout<<"El numero es impar";
				}
		case 3:break;
	}
	
	
	
	
	return 0;
}
