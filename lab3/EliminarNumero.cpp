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
		void mostrarLista(void);
		void eliminarNodo(int);
};

ListaSimple::ListaSimple(void){
	pInicio = NULL;
}

void ListaSimple::eliminarNodo(int dato){
	nodo*p = pInicio, *q = NULL;

	while(p!=NULL && p->dato!=dato){
		q=p;
		p=p->sig;
	}	
	if(p!=NULL){
		if(q!=NULL){
			q->sig=p->sig;
			delete p;
		}
		else{
			pInicio=p->sig;
			delete p;
		}
	}
	else{
		cout<<"Dato a borrar NO existe"<<endl;
	}
}

void ListaSimple::insertarinicioLista(int dato){
	nodo *nuevo;

	nuevo = new nodo;
	nuevo->dato = dato;
	nuevo->sig = pInicio;
	pInicio = nuevo;
}

void ListaSimple::mostrarLista(void){
	nodo *s = pInicio;

	while(s!=NULL){
		cout<<s->dato<<" ";
		s=s->sig;
	}
	if(pInicio==NULL){
		cout<<"La lista esta vacia.";
	}
}

int main (void){

	ListaSimple miLista;
	char resp;
	int dato;
	int datoBuscar;

	cout<<"Desea meter un dato (s/n)? ";
	cin>>resp;
	while(resp=='s'){
		cout<<"Digite el dato: ";
		cin>>dato;
		miLista.insertarinicioLista(dato);
		cout<<"Desea meter un dato (s/n)? ";
		cin>>resp;
	}

	cout<<endl<<"Mostrando lista: "<<endl;
	miLista.mostrarLista();

	cout<<"\nDigite dato borrar: ";
	cin>>datoBuscar;
	miLista.eliminarNodo(datoBuscar);
	cout<<endl<<"Mostrando lista: "<<endl;
	miLista.mostrarLista();

return 0;	
}
