//Problema 2
/* Escribe un programa que lea de la
entrada estandar el precio de un producto
y muestre en la salida estandar el precio
del producto al aplicarle el iva */

#include<iostream>

using namespace std;

int main(){
	
	int precio_producto,adiccion_iva = 0,producto_con_iva;
	
	cout<<"Escriba el precio del producto: "; cin>>precio_producto;
	
	adiccion_iva = precio_producto * 0.19;
	producto_con_iva = adiccion_iva + precio_producto;
	
	cout<<"\nEl precio del producto con iva es: "<<producto_con_iva<<endl;
	
	
	return 0;
}
