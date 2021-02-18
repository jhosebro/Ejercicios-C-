#include<iostream>
#include<conio.h>


using namespace std;



int main(){
	
	float suma_temperatura,temperatura,temperatura_media;
	float temperatura_alta = 0, temperatura_baja = 999;
	
	for(int i=0;i<=24;i+=4){
		cout<<"Digite la temperatura de la hora "<<i<<" :";
		cin>>temperatura;
		
		suma_temperatura += temperatura;
	
		if(temperatura > temperatura_alta){
		temperatura_alta = temperatura;
		}
		if(temperatura < temperatura_baja){
		temperatura_baja = temperatura;
		}
	}
	temperatura_media = suma_temperatura / 6;
	

	cout<<"la temperatura media es:  "<<temperatura_media<<endl; 	
	cout<<"la temperatura mas alta es: "<<temperatura_baja<<endl;
	cout<<"la temperatura mas baja es: "<<temperatura_alta<<endl;	

	
	getch();
	return 0;
}
