/*La calificacion final de un estudiante es la media ponderada de tres notas:
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un
60% y la nota de participacion que cuenta con el 10% restante. Escriba un programa
que lea de la entrada estandar las tres notas de un alumno y escriba en la salida estándar
su nota final. */

#include<iostream>

using namespace std;

int main(){
	
	float practica,teorica,participacion,nota_final = 0;
	
	cout<<"Digite la nota de practica: "; cin>>practica;
	cout<<"Digite la nota de teorica: "; cin>>teorica;
	cout<<"Digite la nota de participacion: "; cin>>participacion;
	
	practica *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;
	
	nota_final = practica + teorica + participacion;
	
	cout<<"\nLa nota final del estudiante es: "<<nota_final<<endl;
	
	
	return 0;
}
