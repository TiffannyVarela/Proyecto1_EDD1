#pragma once

#include "TDAPila.h"
#include "Node.h"
class LinkedStack : public TDAPila
{
protected:
	Node* tope;
public:
	LinkedStack();
	virtual void push(Object*);
	virtual Object* pop() ;
	virtual Object* top() ;
	virtual bool isEmpty();
	virtual void print();
	virtual void clear();
	~LinkedStack();
	
};