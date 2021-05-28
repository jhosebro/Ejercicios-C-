#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Alumno{
		char nombre[20];
		int edad;
		float promedio;
	}a[3];
	
int main(){
	
	int mayorp = 0;
	int posicion = 0;
	
	for(int i=0;i<3;i++){
	fflush(stdin);
	cout<<"Nombre: ";
	cin.getline(a[i].nombre,20,'\n');
	cout<<"Edad: ";
	cin>>a[i].edad;
	cout<<"Promedio: ";
	cin>>a[i].promedio;
	cout<<"\n";
	
	if(a[i].promedio > mayorp){
		mayorp = a[i].promedio;
		posicion = i;
	}
	
	}

	cout<<"\n \nDatos del alumno: "<<endl;
	cout<<"Nombre: "<<a[posicion].nombre<<endl;
	cout<<"Edad: "<<a[posicion].edad<<endl;
	cout<<"Promedio: "<<a[posicion].promedio<<endl;
	
	getch();
	return 0;
}
