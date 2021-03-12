#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int numeros[3][3];
	int numeros2[3][3];
	int suma[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j]; 
		}
	}

	cout<<"\nMatriz 2\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros2[i][j]; 
		}
	}
	
	
	
	cout<<"Suma\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			suma[i][j] = numeros[i][j] * numeros2[i][j];
			cout<<suma[i][j];
		}
		cout<<"\n";
	}
	
	
	
	getch();
	return 0;
}
