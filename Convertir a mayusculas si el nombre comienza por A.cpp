#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[100];
	
	cout<<"Digite su nombre en mayuscula:";
	cin>>palabra;
	
	if(palabra[0]=='A'){
		strlwr(palabra);
		cout<<palabra<<endl;
	}
	else{
	cout<<palabra<<endl;
	}
	
	getch();
	return 0;
}
