#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main(){
	
	char nombre[20] ;
	char nombre2[20];
	
	cout<<"Digite una cadena de caracteres: "<<endl;
	cin>>nombre;
	
	
	
	strcpy(nombre2,nombre);
	
	cout<<nombre2<<endl;
	
	
	
	
	
	
	getch();
	return 0;
}
