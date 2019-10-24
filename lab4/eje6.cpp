#include <iostream>
using namespace std;

struct nodo{
	int dato;
	nodo *sig;
};

void insertarNodo(int dato,nodo *&pInicio){
	nodo *nuevo;
	nuevo = new nodo;
	nuevo->dato=dato;
	nuevo->sig=pInicio;
	pInicio=nuevo;
}

void insertarPar(nodo *&pInicioP,int dato){
	nodo *nuevo;
	nuevo = new nodo;
	nuevo->dato=dato;
	nuevo->sig=pInicioP;
	pInicioP=nuevo;
}

void insertarImpar(nodo *&pInicioI,int dato){
	nodo *nuevo;
	nuevo = new nodo;
	nuevo->dato=dato;
	nuevo->sig=pInicioI;
	pInicioI=nuevo;
}

void buscarPar_Impar(nodo *&pInicio, nodo *&pInicioP, nodo *&pInicioI){
	int x, y;
	nodo *s;
	while(pInicio!=NULL){
		s=pInicio;
		if(s->dato%2==0){
			x=s->dato;
			insertarPar(pInicioP,x);
		}else{
			y=s->dato;
			insertarImpar(pInicioI,y);
		}
		pInicio=pInicio->sig;
		delete s;
	 }
}

void mostrarlista(nodo *&pInicio){
	nodo *s = pInicio;
	
	if(pInicio == NULL){
		cout<<"La lista esta vacia";
	}
	while(s!=NULL){
		cout<<s->dato<<" ";
		s=s->sig;
	}
}
int main(void){
	nodo *pInicio = NULL, *pInicioP = NULL, *pInicioI = NULL;
	
	char resp;
	int dato;
	
	cout<<"Desea ingresar un dato (s/n)? ";
	cin>>resp;
	while(resp=='s' || resp=='S'){
		cout<<"Ingrese el dato: ";
		cin>>dato;
		insertarNodo(dato,pInicio);
		cout<<"Desea Ingresar otro dato (s/n)? ";
		cin>>resp;
	}
		
	cout<<"\nMostrando lista: ";
	mostrarlista(pInicio);
	cout<<endl;
	buscarPar_Impar(pInicio, pInicioP, pInicioI);
	cout<<"\nLista de numeros pares: ";
	mostrarlista(pInicioP);
	cout<<endl;
	cout<<"\nLista de numeros impares: ";
	mostrarlista(pInicioI);
	cout<<endl;
	
	cout<<"\nLista original: ";
	mostrarlista(pInicio);
	
	return 0;
}
