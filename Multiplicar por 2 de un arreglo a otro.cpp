#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	
	int numeros[5] = {1,2,3,4,5};
	int numeros2[5];
	
	for(int i=0;i<5;i++){
		numeros2[i] = numeros[i] * 2;
	}
	
	for(int i=0;i<5;i++){
		cout<<numeros2[i]<<endl;
	}
	
	
	
	
	system("pause");
	return 0;
}
