#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n, suma = 0;
	
	
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	
	for( int i=1;i<=n;i++){
		suma = ((2 * n) - 1); 
	}
	
	cout<<"\nEl resultado de la suma de los elementos es: "<<suma<<endl;
	
	
	getch();
	return 0;
}
