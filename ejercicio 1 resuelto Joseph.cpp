/*1. Escriba un programa que lea de la entrada est�ndar de dos n�meros 
y muestre en la salida est�ndar su suma, resta, multiplicaci�n y divisi�n.*/

#include<iostream>

using namespace std;

int main(){
	int j1,j2,suma=0,resta=0,multiplicacion=0,division=0;
	
	cout<<"Introduzca primer numero: "; cin>>j1;
	cout<<"Introduzca segundo numero: "; cin>>j2;
	
	suma=j1+j2;
	resta=j1-j2;
	multiplicacion=j1*j2;
	division=j1/j2;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
	cout<<"La division es: "<<division<<endl;
	
	return 0;
}
