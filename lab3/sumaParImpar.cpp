#include <iostream>
using namespace std;

struct nodo{
int dato;
nodo *sig;
};

class ListaSimple{
private:
nodo *pInicio;

public:

ListaSimple(void);
void insertarinicioLista(int);
void mostrarLista(int,int);

};

ListaSimple::ListaSimple(void){
pInicio = NULL;
}

void ListaSimple::insertarinicioLista(int dato){
nodo *nuevo;

//new crea un espacio de memoria para lo que le ha pasado y retorna un espacio de memoria.
nuevo = new nodo;
nuevo->dato = dato;
nuevo->sig = pInicio;
pInicio = nuevo;
}

//Mostrando lista con un saltarin de forma iterativa (lazo)	
void ListaSimple::mostrarLista(int sp,int si){
nodo *s = pInicio;

while(s!=NULL){
if(s->dato%2==0){
   sp=sp+s->dato;
}else{
   si=si+s->dato;
}
s=s->sig;
}
 cout<<"La suma de los numeros pares es: "<<sp<<endl;
 cout<<"La suma de los numeros impares es: "<<si<<endl;
}

//Funcion MAIN
int main (void){

ListaSimple miLista;
char resp;
int dato;
int sumaPar=0;
int sumaImpar=0;


cout<<"Desea meter un dato (s/n)? ";
cin>>resp;
while(resp=='s'){
cout<<"Digite el dato: ";
cin>>dato;
        miLista.insertarinicioLista(dato);
cout<<"Desea meter un dato (s/n)? ";
cin>>resp;
}

cout<<endl;
miLista.mostrarLista(sumaPar,sumaImpar);


return 0;	
}

