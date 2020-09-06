#pragma once

#include "TDACola.h"

class ArrayQueue : public TDACola
{
protected:
	Object** array;
	int tam;
	int frente, final,aux;
public:
	ArrayQueue();
	virtual void encolar(Object*);
	virtual Object* desencolar();
	virtual Object* verTope();
	virtual bool vacia();
	virtual void imprime();	
	~ArrayQueue();
	
};