#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float a,b,c,resultado1 = 0,resultado2 = 0;
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	
	resultado1	=	(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	resultado2	=	(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	cout<<"\nEl resultado para la suma es: "<<resultado1<<endl;
	cout<<"El resultado para la resta es: "<<resultado2<<endl;
	
	
	
	
	return 0;
}
