#include "LinkedStack.h"
#include <iostream>
using namespace std;


Node* nodoLS;
Node* actLS;

LinkedStack::LinkedStack(){
	tope=NULL;
}

void LinkedStack::push(Object* x){
	/*nodoLS = dynamic_cast<Node*>(x);
	nodoLS->data=dynamic_cast<Node*>(x)->data;
	nodoLS->siguiente=tope;
	tope = nodoLS;*/

	nodoLS = new Node();
	nodoLS->data=x;
	nodoLS->siguiente=tope;
	tope=nodoLS;
}

Object* LinkedStack::pop() {
	if (isEmpty())
	{
		cout<<"No hay elementos en la pila"<<endl;
		return NULL;
	}
	else{
		actLS = tope;
		tope = tope->siguiente;
		tope->anterior=NULL;
		actLS->siguiente=NULL;
		Object* retValue = actLS->data;
		actLS->data=NULL;
		delete actLS;
		return retValue;
	}
}

Object* LinkedStack::top() {
/* if ( isempty() )
  cout<<"Stack is Empty";
 else
  cout<<"Element at top is : "<< top->data;
}*/
	if (isEmpty())
	{
		cout<<"LinkedStack Vacia"<<endl;
	}
	else{
		return tope->data;
	}
}

bool LinkedStack::isEmpty(){
	if (tope==NULL)
	{
		return true;
	}
	else{
		return false;
	}
}

void LinkedStack::print(){
	actLS = tope;
	while(actLS!=NULL){
		cout<<actLS->data->toString();
		actLS = actLS->siguiente;
	}
}

void LinkedStack::clear(){
	delete tope;
	tope=NULL;
}

LinkedStack::~LinkedStack(){
	delete tope;
}
