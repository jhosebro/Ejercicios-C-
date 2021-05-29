#include<iostream>
#include<conio.h>

using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumno[100];



int main(){
	
	int numero_estudiantes;
	float promedio_alumno[100];
	int promM = 0, pos = 0;
	
	cout<<"Digite el numero de estudiantes: ";
	cin>>numero_estudiantes;
	
	for(int i=0;i<numero_estudiantes;i++){
	fflush(stdin);
	cout<<i+1<<" Digite su nombre: ";
	cin.getline(alumno[i].nombre,20,'\n');
	cout<<i+1<<" Digite su sexo: ";
	cin.getline(alumno[i].sexo,20,'\n');
	cout<<i+1<<" Digite su edad: ";
	cin>>alumno[i].edad;
	cout<<"\n";
	
	cout<<"\n.:Notas del alumno:.\n";
	cout<<i+1<<" Nota 1: "; cin>>alumno[i].prom.nota1;
	cout<<i+1<<" Nota 2: "; cin>>alumno[i].prom.nota2;
	cout<<i+1<<" Nota 3: "; cin>>alumno[i].prom.nota3;
	cout<<"\n";
		
	promedio_alumno[i] = (alumno[i].prom.nota1+alumno[i].prom.nota2+alumno[i].prom.nota3)/3;
	
	
	if(promedio_alumno[i]>promM){
		promM = promedio_alumno[i];
		pos = i;
	}
	
	
	
	}
	cout<<"\nDatos del alumno con mejor promedio:\n";
	cout<<"Nombre: "<<alumno[pos].nombre<<endl;
	cout<<"Sexo: "<<alumno[pos].sexo<<endl;
	cout<<"Edad: "<<alumno[pos].edad<<endl;
	cout<<"Promedio: "<<promedio_alumno[pos];
	
	getch();
	return 0;
}
