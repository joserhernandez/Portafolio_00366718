//EJERCICIO 14 
#include<iostream>
using namespace std;

int main(void){
	
	int n;
	cout<<"Ingrese el tamano de la matriz: ";
	cin>>n;
	
	int matriz[n][n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"Escriba un numero para llenar la matriz: ";
			cin>>matriz[i][j];
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"|\t";
		for(int j=0;j<n;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<"|"<<endl;
	}
	
	
	int matriz2[n-1][n-1];
	int f;
	int c;
	
	cout<<"Fila que se va a eliminar: ";
	cin>>f;
	cout<<"Columna que se va a eliminar: ";
	cin>>c;
	
	for(int i=f-1;i<n;i++){
		for (int j=0;j<n;j++){
			matriz[i][j]=matriz[i+1][j];
			
		}
	}

	for (int i=0;i<n;i++){
		for (int j=c-1;j<n;j++){
			matriz[i][j]=matriz[i][j+1];
		}
	}


	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-1;j++){
			matriz2[i][j]=matriz[i][j];
		}
	}

	for(int i=0;i<n-1;i++){
		cout<<"|\t";
		for(int j=0;j<n-1;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<"|"<<endl;
	}
	
	return 0;
}

