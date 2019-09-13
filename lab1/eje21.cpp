/*Cree una matriz cuadrada de enteros que contenga cinco filas y cinco columnas e
inicialice todas sus casillas a cero. Solicite al usuario sólo aquellos valores que sean
necesarios para crear una matriz diagonal estrictamente inferior*/
#include <iostream>
using namespace std;

int main(){
	int matriz[5][5];
	for(int i=0; i<5;i++){
		for(int j=0;j<5;j++){
			matriz[i][j]=0;
		}
	}
	for(int i=0; i<5;i++){
		for(int j=0;j<5;j++){
			if(i==j||i>j){
				cout<<"Ingresar dato de la matriz: ";
				cin>>matriz[i][j];
			}
		}
	}
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<"|\t";
		for(int j=0;j<5;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<"|"<<endl;
	}
	
	

	return 0;
}
