#include<iostream>
#include<conio.h>

using namespace std;

struct Atleta{
	char nombre[20];
	char pais[20];
	int medallas;	
}atl[100];

int main(){
	
	int n_atletas,posM=0;
	int mayor=0;
	
	cout<<"Digite el numero de atletas: ";
	cin>>n_atletas;
	
	for(int i=0;i<n_atletas;i++){
		fflush(stdin);
		cout<<i+1<<". Digite su nombre: ";
		cin.getline(atl[i].nombre,20,'\n');
		cout<<i+1<<". Digite su pais: ";
		cin.getline(atl[i].pais,20,'\n');
		cout<<i+1<<". Digite sus medallas: ";
		cin>>atl[i].medallas;
		
		if(atl[i].medallas > mayor){
			mayor = atl[i].medallas;
			posM = i;
		}
				
		cout<<"\n";
	}
	
	cout<<"\n.:Datos del atleta con mayor numero de medallas:.\n";
	cout<<"Nombre: "<<atl[posM].nombre<<endl;
	cout<<"Pais: "<<atl[posM].pais<<endl;
	
	getch();
	return 0;
}
