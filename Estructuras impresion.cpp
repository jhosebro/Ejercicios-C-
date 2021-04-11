#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}
persona1 = {"Jhoan",20},
persona2 = {"Sebastian",21};

int main(){
	
	cout<<"Nombre 1: "<<persona1.nombre<<endl;
	cout<<"Edad 1: "<<persona1.edad<<endl;
	
	cout<<"\nNombre 2: "<<persona2.nombre<<endl;
	cout<<"Edad 2: "<<persona2.edad<<endl;
	
	
	getch();
	return 0;
}
