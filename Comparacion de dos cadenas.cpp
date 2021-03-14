#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char palabra1[100];
	char palabra2[100];
	

	cout<<"Digite la primera cadena: "; cin>>palabra1;
	cout<<"Digite la segunda cadena: "; cin>>palabra2;

	if(strcmp(palabra1,palabra2)==0){
		cout<<"Ambas cadenas son iguales";
	}
	else{if(strcmp(palabra1,palabra2) > 0){
		cout<<palabra1<<" es mayor alfabeticamente"<<endl;
		}
		else{
			cout<<palabra2<<" es mayor alfabeticamente"<<endl;
		}
	}

	
	getch();
	return 0;
}
