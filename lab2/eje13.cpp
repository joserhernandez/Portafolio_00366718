//Ejercicio 13
#include<iostream>
using namespace std; 

int func(int);
int funcI(int n){
	int r=0;
	for(int i=n;i>0;--i){
		r=r+i;
		}
		return r;
	}
int main(){
		
	int n;
	cout<<"Escriba un numero: ";
	cin>>n;
	int resp=func(n);
	int r=funcI(n);
	cout<<"Con funcion recursiva: "<<resp<<endl;
	cout<<"Con funcion iterativa: "<<r;
	return 0;
}

int func(int n){
if(n==0)
return(0);
return(n + func(n-1));
}

