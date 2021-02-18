#include<iostream>

using namespace std;

int main(){
	
	float a1,a2,a3,a4,aux,calculo = 0;
	
	cout<<"Digite la nota del alumno 1: "; cin>>a1;
	cout<<"Digite la nota del alumno 2: "; cin>>a2;
	cout<<"Digite la nota del alumno 3: "; cin>>a3;
	cout<<"Digite la nota del alumno 4: "; cin>>a4;
	
	calculo= ((a1+a2+a3+a4)/4);
	
	aux=calculo;
	a1=aux;
	a2=aux;
	a3=aux;
	a4=aux;
	
	cout<<"\nLa nota promedio del alumno 1 es: "<<a1<<endl;
	cout<<"La nota promedio del alumno 2 es: "<<a2<<endl;
	cout<<"La nota promedio del alumno 3 es: "<<a3<<endl;
	cout<<"La nota promedio del alumno 4 es: "<<a4<<endl;
	
	
	
	return 0;
}
