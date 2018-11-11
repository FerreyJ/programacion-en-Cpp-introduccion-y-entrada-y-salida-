/*2. Escribe un programa que lea de la entrada estándar el precio de un producto y
muestre en la salida estándar el precio del producto al aplicarle el IVA*/

#include<iostream>

using namespace std;

int main(){
	float precio_producto,iva,IVA,precio_final;
	
	cout<<"Introduzca valor inicial del producto: "; cin>>precio_producto;
	cout<<"Introduzca IVA de su pais en decimales: "; cin>>iva; 	/*El porcentaje 
													de IVA varia en los paises,
													introducir en decimales.*/
	
	IVA=precio_producto*iva;
	precio_final=precio_producto+IVA;
	
	cout<<"\nEl IVA del producto es: "<<IVA<<endl;
	cout<<"El precio final del producto es: "<<precio_final<<endl;
	
	return 0;
}

