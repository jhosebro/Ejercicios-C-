#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char palabra1[100];
	char verdad[100];
	cout<<"Digite una palabra:";
	cin>>palabra1;
	
	strcpy(verdad,palabra1);
	strrev(palabra1);
	
	 
		
	if(strcmp(palabra1,verdad)!=0){
		cout<<"No es una palabra polindroma"<<endl;
	}
	else {
		cout<<"Es una palabra polindroma"<<endl;
	}
	
	
	
	getch();
	return 0;
}
