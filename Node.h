#pragma once
#include "Object.h"

class Node: public Object
{
public:
	Node();
	void setSiguiente(Node*);
	Node* getSiguiente();
	void setAnterior(Node*);
	Node* getAnterior();
	void setData(Object*);
	Object* getData();	
	~Node();
	Node* siguiente;
	Node* anterior;
	Object* data;
};