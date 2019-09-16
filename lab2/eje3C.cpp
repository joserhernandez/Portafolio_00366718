//EJERCICIO 3C
#include<iostream>
#include<cmath>
using namespace std;

long double logaritmo(long double, long double , float );

int main(void){
	float x=0;
	long double i=2000;//representando el infinito
	int suma=0;
	cout<<"Ingrese un numero x entre 0 y 1: ";
	cin>>x;
	cout<<"ln("<<x<<" + 1) es: "<<logaritmo(i, suma, x);
	
	
	return 0;
}


long double logaritmo(long double n, long double suma, float x){ 
	if(n==0){
		return suma;
	}else{
		return suma+((((pow(-1, n+1))*pow(x,n))/(n))+logaritmo(n-1,suma,x));
	}
}
