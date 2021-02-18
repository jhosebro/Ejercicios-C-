#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	float cat1,cat2,hipotenusa,suma;
	
	
	cout<<"Digite el valor en cm del cateto 1: "; cin>>cat1;
	cout<<"Digite el valor en cm del cateto 2: "; cin>>cat2;
	
	cat1 = cat1*cat1;
	cat2 = cat2*cat2;
	suma = cat1+cat2;
	hipotenusa = sqrt(suma);
	cout.precision(2);
	cout<<"\nLa hipotenusa del triangulo rectangulo es: "<<hipotenusa<<endl;
	
	
	return 0;
}
