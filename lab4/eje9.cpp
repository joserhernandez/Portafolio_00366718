#include <iostream>
using namespace std;

struct nodo{
	string nombre;
	string apellido;
	string carnet;
	int edad;
	string telefono;
	string correo;
	nodo *sig;
};

class persona{
	private:
		nodo *pInicio;
		
	public:
		persona(void);
		void menu(void);
		void elegirOpcion(int);
		void insertarNodo(int,string,string,string,string,string);
		void eliminarNodo(string);
		void actualizarNodo(string);
		void mostrarLista(void);
};

persona::persona(void){
	pInicio=NULL;
}

void persona::menu(void){
	int resp, edad;
	string nombre, apellido, carnet, telefono, correo;
	
	do{
	
		cout<<"::MENU::"<<endl;
		cout<<"1. Llenar lista."<<endl;
		cout<<"2. Eliminar una persona."<<endl;
		cout<<"3. Actualizar los datos de una persona."<<endl;
		cout<<"4. Mostrar todas las personas."<<endl;
		cout<<"5. Salir."<<endl;
		cout<<"\nIngrese opcion: ";
		cin>>resp;
		cout<<endl;
	
	
		switch(resp){
			case 1: 
				cout<<"Ingrese el nombre de la persona: ";
				cin>>nombre;
				cout<<"Ingrese el apellido: ";
				cin>>apellido;
				cout<<"Ingrese el carnet: ";
				cin>>carnet;
				cout<<"Ingrese la edad: ";
				cin>>edad;
				cout<<"Ingrese el numero de telefono: ";
				cin>>telefono;
				cout<<"Ingrese el correo: ";
				cin>>correo;
				insertarNodo(edad,nombre,apellido,carnet,telefono,correo);
				system("pause");
				break;
			case 2:
				cout<<"Ingrese el nombre de la persona a eliminar: ";
				cin>>nombre;
				eliminarNodo(nombre);
				system("pause");
				break;
			case 3:
				cout<<"Ingrese el nombre de la persona a actualizar: ";
				cin>>nombre;
				actualizarNodo(nombre);
				system("pause");
				break;
			case 4:
				mostrarLista();
				system("pause");
				break;
			default:
				cout<<"Opcion ingresada no valida";
				system("pause");
				break;
		}
		system("cls");
	}while(resp!=5);
}



void persona::insertarNodo(int edad, string nombre, string apellido, string carnet, string telefono, string correo){
	nodo *nuevo;
	nuevo= new nodo;
	nuevo->carnet=carnet;
	nuevo->nombre=nombre;
	nuevo->apellido=apellido;
	nuevo->edad=edad;
	nuevo->telefono=telefono;
	nuevo->correo=correo;
	nuevo->sig=pInicio;
	pInicio=nuevo;	
}

void persona::eliminarNodo(string nombre){
	nodo *p, *q;
	p=pInicio;
	q=NULL;
	while(p!=NULL && p->nombre!=nombre){
		q=p;
		p=p->sig;
	}
	if(p!=NULL){
		if(q!=NULL){
			q->sig=p->sig;
			delete p;
			cout<<"La persona se ha eliminado correctamente"<<endl;
		}else{
			pInicio=p->sig;
			delete p;
			cout<<"La persona se ha eliminado correctamente"<<endl;
		}
	}else{
		cout<<"Persona a eliminar no existe"<<endl;
	}
}

void persona::actualizarNodo(string nombre){
	nodo *s=pInicio;
	char resp;
	string nom, apellido, carnet, telefono, correo;
	int edad;
	
	while(s!=NULL && s->nombre!=nombre){
		s=s->sig;
	}
	
	if(s==NULL){
		cout<<"Esta persona no existe"<<endl;
	}else{
	
		cout<<"Que dato desea actualizar?"<<endl;
		cout<<"A. Nombre"<<endl;
		cout<<"B. Apellido"<<endl;
		cout<<"C. Edad"<<endl;
		cout<<"D. Carnet"<<endl;
		cout<<"E. Telefono"<<endl;
		cout<<"F. Correo"<<endl;
		cin>>resp;
				
		switch(resp){
			case 'a':
				case'A':
					cout<<"Ingrese el nuevo nombre: ";
					cin>>nom;
					s->nombre=nom;
					break;
			case 'b':
				case 'B':
					cout<<"Ingrese el nuevo apellido: ";
					cin>>apellido;
					s->apellido=apellido;
					break;
			case 'c':
				case 'C':
					cout<<"Ingrese la nueva edad: ";
					cin>>edad;
					s->edad=edad;
					break;
			case'd':
				case 'D':
					cout<<"Ingrese el nuevo carnet: ";
					cin>>carnet;
					s->carnet=carnet;
					break;
			case 'e':
				case 'E':
					cout<<"Ingrese el nuevo numero de telefono: ";
					cin>>telefono;
					s->telefono=telefono;
					break;
			case 'f':
				case 'F':
					cout<<"Ingrese el nuevo correo electronico: ";
					cin>>correo;
					s->correo=correo;
					break;
			default:
				cout<<"Error..."<<endl;
				break;
		}
	}
}


void persona::mostrarLista(void){
	nodo *s=pInicio;
	if(pInicio==NULL){
		cout<<"La lista esta vacia."<<endl;;
	}
	while(s!=NULL){
		cout<<"Nombre de la persona: "<<s->nombre<<" "<<s->apellido<<endl;
		cout<<"Carnet: "<<s->carnet<<endl;
		cout<<"Edad: "<<s->edad<<endl;
		cout<<"Numero de telefono: "<<s->telefono<<endl;
		cout<<"Correo electronico: "<<s->correo<<endl<<endl;
		s=s->sig;
	}
}

int main(void){
	persona Lista;
	Lista.menu();
		
	return 0;
}
