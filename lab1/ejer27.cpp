/*Implemente una estructura para utilizar números complejos en C++, con campos para
almacenar la parte real y la parte imaginaria. Cree una función que acepte un número
complejo, calcule su multiplicación y devuelva el resultado */
#include <iostream>
using namespace std;

struct complejo{
	float real;
	float imaginario;
}numero1,numero2,resp;

void complex();

int main(void){
	cout<<"Ingrese el primer numero complejo"<<endl;
	cout<<"Ingrese la parte real: ";
	cin>>numero1.real;
	cout<<"Ingrese la parte imaginaria: ";
	cin>>numero1.imaginario;
	
	cout<<"Ingrese el segundo numero complejo"<<endl;
	cout<<"Ingrese la parte real: ";
	cin>>numero2.real;
	cout<<"Ingrese la parte imaginaria: ";
	cin>>numero2.imaginario;
	
	complex();
	
	
	return 0;
}

void complex(){
	resp.real = (numero1.real*numero2.real) - (numero1.imaginario*numero2.imaginario);
	resp.imaginario = (numero1.real*numero2.imaginario + numero1.imaginario*numero2.real);
	
	if(resp.imaginario>=0){
		cout<<"La multiplicacion de los numeros complejos es: "<<resp.real<<" + "<<resp.imaginario<<"i";
	}
	else{
		cout<<"La multiplicacion de los numeros complejos es: "<<resp.real<<" "<<resp.imaginario<<"i";
	}
	
}


