#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	float examen1,examen2,examen3;
	int aprobaron_todos = 0,aprobaron_almenos_uno = 0,aprobaron_ultimo = 0;
	
	for(int i=1;i<=5;i++){
		cout<<i<<"Digite la nota del primer examen: "; cin>>examen1;
		cout<<i<<"Digite la nota del segundo examen: "; cin>>examen2;
		cout<<i<<"Digite la nota del tercer examen: "; cin>>examen3;
		cout<<"\n";
		
		if((examen1>2.99)&&(examen2>2.99)&&(examen3>2.99)){
			aprobaron_todos++;
		}
		
		if((examen1>2.99)||(examen2>2.99)||(examen3>2.99)){
			aprobaron_almenos_uno++;
		}
		
		if((examen1<2.99)&&(examen2<2.99)&&(examen3>2.99)){
			aprobaron_ultimo++;
		}
	}
	
	cout<<"\na)Aprobaron todos los examenes: "<<aprobaron_todos<<endl;
	cout<<"\nb)Aprobaron al menos un examen: "<<aprobaron_almenos_uno<<endl;
	cout<<"\nc)Aprobaron solo el ultimo examen: "<<aprobaron_ultimo<<endl;
			
	
	getch();
	return 0;
}
