#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	char letras1[] = {'a','b','c','d','e'};
	char letras2[] = {'f','g','h','i','j'};
	char letras3[10];
	
	//copiando los elementos de letras 1 a letras 3
	for( int i=0;i<5;i++){
		letras3[i] = letras1[i];
	}
	
	//copiando el segundo
	for(int i=5;i<10;i++){
		letras3[i] = letras2[i-5];
	}
	
	//mostrar el nuevo arreglo
	
	for(int i=0;i<10;i++){
		cout<<letras3[i]<<endl;
	}
	
	
	
	getch();
	return 0;
}
