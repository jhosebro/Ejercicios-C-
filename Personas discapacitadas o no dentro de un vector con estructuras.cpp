#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct persona{
	char nombre[20];
	bool discapacidad;
}p[100],d[100],nd[100];


int main(){
	
	int n_personas, pD = 0, pND = 0;
	

	
	cout<<"Digite el numero de personas: ";
	cin>>n_personas;
	
	for(int i=0;i<n_personas;i++){
		fflush(stdin);
		cout<<"Digite el nombre: ";
		cin.getline(p[i].nombre,20,'\n');
		cout<<"Es discapacitado (1/0)?";
		cin>>p[i].discapacidad;
		
		if( p[i].discapacidad == 1){
			strcpy(d[pD].nombre,p[i].nombre);
			pD++;	
		}
		else{
			strcpy(nd[pND].nombre,p[i].nombre);
			pND++;
		}
		cout<<"\n";
	}
	
	cout<<"\n.Personas con discapacidad.\n";
	for(int i=0;i<n_personas;i++){
		cout<<d[i].nombre<<endl;
	}
	
	cout<<"\n.Personas sin discapacidad. \n";
	for(int i=0;i<n_personas;i++){
		cout<<nd[i].nombre<<endl;
	}
	
	getch();
	return 0;
}
