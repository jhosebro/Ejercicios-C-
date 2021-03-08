#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int numeros[3][3]={{1,4,7} , {2,5,8} , {3,6,9}};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[j][i];
		}
		cout<<"\n";
	}
	
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
			cout<<numeros[i][j]<<endl;
			}
		}
	}
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
