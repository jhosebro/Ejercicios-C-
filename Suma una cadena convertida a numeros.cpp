#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;


int main(){
	char cad[100];
	char cad2[100];
	
	int numero;
	float suma,numero2;
	
	
	cout<<"Digite el numero entero:";
	cin.getline(cad,100,'\n');
	cout<<"Digite el numero real:";
	cin.getline(cad2,100,'\n');
	

	numero = atoi(cad);
	numero2 = atof(cad2);
	
	suma = numero + numero2;
	
	cout<<suma<<endl;
	
	getch();
	return 0;
}
