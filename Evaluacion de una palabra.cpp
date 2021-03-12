#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char palabra[100];
	int longitud=0;
	
	cout<<"Digite una cadena de caracteres: ";
	cin>>palabra;
	
	longitud = strlen(palabra);
	
	if(longitud>10){
		cout<<palabra<<endl;
	}
	else{
		return 0;
	}

	
	
	
	
	
	getch();
	return 0;
}
