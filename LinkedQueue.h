#pragma once
#include "TDACola.h"
#include "Node.h"
#include "Object.h"

class LinkedQueue : public TDACola
{
protected:
	Node* inicio;
	Node* final;
public:
	LinkedQueue();
	virtual void encolar(Object*);
	virtual Object* desencolar();
	virtual Object* verTope();
	virtual bool vacia();
	virtual void imprime();	
	~LinkedQueue();
	
};