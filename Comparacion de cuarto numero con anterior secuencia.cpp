#include<iostream>

using namespace std;

int main(){
	
	int a,b,c,d;
	
	cout<<"Digite tres numeros: ";
	cin>>a>>b>>c;
	cout<<"Digite el numero a evaluar: ";
	cin>>d;
	
	if((a==d)or(b==d)or(c==d)){
		cout<<"El numero se encuentra dentro de los tres anteriores";		
	}
	else{
		cout<<"Me traes apendejado Mayerli";
	}
	
	return 0;
}
