#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de funcion
void pedirDatos();
void al_cuadrado(float x);

float num1;

int main(){
	
	pedirDatos();
	al_cuadrado(num1);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero a elevar: ";
	cin>>num1;
}

void al_cuadrado(float x){
	float elevacion = x * x;
	
	cout<<"La elevacion es: "<<elevacion<<endl;
}
