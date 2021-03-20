#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char palabra[] = "jhoan";
	char palabra2[] = "Joan";
	
	strupr(palabra);
	strupr(palabra2);
	
	if(strcmp(palabra,palabra2)==0){
		cout<<"Son iguales"<<endl;
	}
	else{
		cout<<"No son iguales"<<endl;
	}
	
	getch();
	return 0;
}
