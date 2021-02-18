#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int suma = 0, resta = 0,sumatoria = 0,n;
	
	cout<<"Digite el numero de sumas a hacer: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		resta = i + 1;
		suma = i - resta;
		sumatoria += suma; 
	}
	
	cout<<"\nLos elementos sumados dan un resultado de: "<<sumatoria<<endl;
	
	
	system("pause");
	return 0;
}
