#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char palabra[] = "Jhoan";
	char palabra2[] = {'J','h','o','a','n'};
	char nombre[20];
	
	
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	cout<<"Digite su nombre: ";
	cin.getline(nombre,20,'\n');
	
	cout<<nombre<<endl;
	
	
	
	getch();
	return 0;
}
