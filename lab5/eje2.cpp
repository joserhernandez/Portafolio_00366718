#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *izq;
    Nodo *der;
};

Nodo *T;

Nodo* crearNodo(){
    Nodo* n = (Nodo*) malloc(sizeof(Nodo));
    if(n == NULL){
        cout << "I QUIT";
        exit(0);
    }
    return n;
}

void inicializarArbol(){
    T = NULL;
}

bool estaVacio(Nodo* T){
    if(T == NULL) return true;
    else return false;
}

Nodo* inicializarNodo(int n){
    Nodo* temp = crearNodo();
    temp->dato = n;
    temp->izq = temp->der = NULL;
    return temp;
}


int sumaNodosPar(Nodo *T){
    int raiz;
    if(T!=NULL){
    	if(T->dato%2==0){
			raiz = T->dato;
		}else{
			raiz=0;
		}
        
        int izq = sumaNodosPar(T->izq);
        int der = sumaNodosPar(T->der);
        return raiz+izq+der;
    }
}

int sumaNodosImpar(Nodo *T){
    int raiz;
    if(T!=NULL){
    	if(T->dato%2!=0){
			raiz = T->dato;
		}else{
			raiz=0;
		}
        
        int izq = sumaNodosImpar(T->izq);
        int der = sumaNodosImpar(T->der);
        return raiz+izq+der;
    }
}

void mostrarArbolInOrder(Nodo* T){
    if(estaVacio(T)) return;

    mostrarArbolInOrder(T->izq);
    cout << T->dato << " -> ";
    mostrarArbolInOrder(T->der);
}

int contarNodosPar(Nodo* T){
	int cont;
    if(estaVacio(T)) return 0;
    if(T->dato%2!=0){
    	cont=0;
	}else{
		cont = 1;
	}
	
    int contIzq = contarNodosPar(T->izq);
    int contDer = contarNodosPar(T->der);
    int total = cont + contIzq + contDer;
    return total;
	
}
int contarNodosImpar(Nodo* T){
	int cont;
    if(estaVacio(T)) return 0;
	if(T->dato%2==0){
    	cont=0;
	}else{
		cont = 1;
	}
    int contIzq = contarNodosImpar(T->izq);
    int contDer = contarNodosImpar(T->der);
    int total = cont + contIzq + contDer;
    return total;
}
int contarNodosPositivos(Nodo* T){
	int cont;
    if(estaVacio(T)) return 0;
	if(T->dato>0){
    	cont=1;
	}else{
		cont = 0;
	}
    int contIzq = contarNodosPositivos(T->izq);
    int contDer = contarNodosPositivos(T->der);
    int total = cont + contIzq + contDer;
    return total;
}
int contarNodosNegativos(Nodo* T){
	int cont;
    if(estaVacio(T)) return 0;
	if(T->dato<0){
    	cont=1;
	}else{
		cont = 0;
	}
    int contIzq = contarNodosNegativos(T->izq);
    int contDer = contarNodosNegativos(T->der);
    int total = cont + contIzq + contDer;
    return total;
}
int contarNodosCero(Nodo* T){
	int cont;
    if(estaVacio(T)) return 0;
	if(T->dato==0){
    	cont=1;
	}else{
		cont = 0;
	}
    int contIzq = contarNodosCero(T->izq);
    int contDer = contarNodosCero(T->der);
    int total = cont + contIzq + contDer;
    return total;
}



int main()
{
    system("color 1f");
    inicializarArbol();

    Nodo* n6 = inicializarNodo(-17);
    Nodo* n5 = inicializarNodo(0);
    Nodo* n4 = inicializarNodo(2058);
    Nodo* n3 = inicializarNodo(1001);
    Nodo* n2 = inicializarNodo(2002);
       Nodo* n1 = inicializarNodo(-8);

    T = n1; n1->izq = n2; n1->der = n3;
    n2->izq = n4; n2->der = n5; n3->izq = n6;

    mostrarArbolInOrder(T);
    cout << "\n============================================\n";


    cout << "El total de nodos Pares: " << contarNodosPar(T);
    cout << "\nEl total de nodos Impares: " << contarNodosImpar(T);
    
    
    cout <<endl<< "Suma de nodos pares es: " << sumaNodosPar(T);
	cout <<endl<< "Suma de nodos impares es: " << sumaNodosImpar(T);
	
	cout << "\nEl total de nodos Positivos: " << contarNodosPositivos(T);
	cout << "\nEl total de nodos Negativos: " << contarNodosNegativos(T);
	cout << "\nEl total de nodos Ceros: " << contarNodosCero(T);
	
    return 0;
}
