#pragma once

#include "TDAPila.h"

class ArrayStack : public TDAPila
{
protected:
	Object** array;
	int tam;
	int tope;
public:
	ArrayStack();
	virtual void push(Object*);
	virtual Object* pop() ;
	virtual Object* top() ;
	virtual bool isEmpty();
	virtual void print();
	virtual void clear();
	~ArrayStack();
	
};