#include "LinkedQueue.h"
#include "Alumno.h"
#include <iostream>
#include <string>
using namespace std;

Node* nodoLQ;
Node* actLQ = new Node();

LinkedQueue::LinkedQueue(){
	inicio=final=NULL;
}

void LinkedQueue::encolar(Object* x){
	nodoLQ = dynamic_cast<Node*>(x);
	if (vacia())
	{
		inicio=final=nodoLQ;
	}
	else{
		final->siguiente = nodoLQ;
		nodoLQ->anterior = final;
		final = nodoLQ;
	}
}

Object* LinkedQueue::desencolar(){
	/*if (!vacia())
	{
		if (inicio==final)
		{
			inicio=final=NULL;
		}
		else{
			actLQ = inicio;
			inicio = inicio->siguiente;
			return inicio;
			delete actLQ;
		}
	}
	else{
		return NULL;
	}*/
	return NULL;
}

Object* LinkedQueue::verTope(){
	if (vacia())
	{
		return NULL;
	}
	else{
		return inicio->data;
	}
}

bool LinkedQueue::vacia(){
	if (inicio==NULL)
	{
		return true;
	}
	else{
		return false;
	}
}

void LinkedQueue::imprime(){
	actLQ = inicio;
	if (actLQ!=NULL)
	{
		while(actLQ!=NULL){
			cout<<actLQ->getData()->toString();
			actLQ=actLQ->siguiente;
		}
	}
	else{
		cout<<"Cola Vacia"<<endl;
	}
}

LinkedQueue::~LinkedQueue(){
	delete inicio;
}
