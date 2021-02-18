#include<iostream>

using namespace std;


int main(){
	
	int edad;
	
	cout<<"Digite su edad: ";
	cin>>edad;
	
	if((edad>=18)&&(edad<=25)){
		cout<<"Su edad esta en el rango de [18-25]";
	}
	else{
		cout<<"Su edad no esta en dicho rango";
	}
	
	
	
	
	return 0;
}
