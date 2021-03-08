#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	
	
	int numeros[100][100], filas,columnas;
	int matriz2[100][100];
	
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]:";
			cin>>numeros[i][j];
		}
	}

	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matriz2[i][j] = numeros[i][j];
		}
	}
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz2[i][j];
		}
		cout<<"\n";
	}
	
system("pause");
return 0;
	
}
