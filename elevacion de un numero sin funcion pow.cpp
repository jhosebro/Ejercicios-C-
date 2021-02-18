#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int x, y, i, elevacion = 1;
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y ( numero de elevacion ) : "; cin>>y;
	
	for(i = 1;i<=y;i++){
		elevacion *= x;
		
	}
	
	cout<<"\nEl valor de x es: "<<elevacion<<endl;
	
	
	
	
	getch();
	return 0;
}
