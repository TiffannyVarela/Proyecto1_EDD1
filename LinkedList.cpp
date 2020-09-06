#include "LinkedList.h"
#include "Alumno.h"
#include <iostream>
#include <string>
using namespace std;

Node* nodo;
Node* act = new Node();

LinkedList::LinkedList(){
	inicio = NULL;
	final=NULL;
	n = 0;
}

bool LinkedList::inserta(int p,Object* x){
	if (p>=1 && p<=n+1)
	{
		nodo = dynamic_cast<Node*>(x);
		if (inicio==NULL)
		{
			inicio = nodo;
			inicio->siguiente=NULL;
			inicio->anterior=NULL;
			final = inicio;
		}
		else{
			final->siguiente=nodo;
			nodo->siguiente=NULL;
			nodo->anterior=final;
			final=nodo;
		}
		n++;
		return true;
	}
	else{
		cout<<"Posicion no valida"<<endl;
		return false;
	}
}

void LinkedList::imprime(){
	act=inicio;
	if (inicio!=NULL)
	{
		while(act!=NULL){
			cout<<act->getData()->toString();
			act = act->siguiente;
		}
	}
	else{
		cout<<"Lista Vacia"<<endl;
	}
}

Object* LinkedList::buscar(Object* x){
	nodo = dynamic_cast<Node*>(x);
	act = inicio;
	bool resp = false;
	int pos=0;
	if (inicio!=NULL)
	{
		while(act!=NULL && resp!=true){
			if (dynamic_cast<Alumno*>(act->getData())->getCuenta().length()==dynamic_cast<Alumno*>(nodo->getData())->getCuenta().length() && dynamic_cast<Alumno*>(act->getData())->getCuenta().compare(dynamic_cast<Alumno*>(nodo->getData())->getCuenta()))
			{
				return act;
				resp = true;
			}
			act = act->siguiente;
		}
		if (!resp)
		{
			cout<<"Nodo no encontrado"<<endl;
		}
	}
	else{
		cout<<"Lista Vacia"<<endl;
	}
}

Object* LinkedList::borrar(int p){
	act = inicio;
    nodo = act->siguiente;
 
    if (p < 1 || p > n) {
        cout << "Fuera de rango " << endl;
    } else if (p == 1) {
    	return act->siguiente;
        inicio = act->siguiente;
    } else {
        for (int i = 2; i <= p; i++) {
            if (i == p) {
                Node* aux_node = nodo;
                act->siguiente = nodo->siguiente;
                return aux_node;
                delete aux_node;
                n--;
            }
            act = act->siguiente;
            nodo = nodo->siguiente;
        }
    }
}

bool LinkedList::vacia(){
	if (n==0)
	{
		return true;
	}
	else{
		cout<<"Cantidad de elementos "<<n<<endl;
		return false;
	}
}

Object* LinkedList::obtener(int p) {

}

Object* LinkedList::siguiente(int p){
	return obtener(p+1);
}

Object* LinkedList::anterior(int p){
	return obtener(p-1);
}

void LinkedList::anula(){
	if(inicio){
		delete inicio;
		n=0;
		inicio = NULL;
	}
}

LinkedList::~LinkedList(){
	delete nodo;
	delete act;
	cout<<"LinkedList Eliminado"<<endl;
}
