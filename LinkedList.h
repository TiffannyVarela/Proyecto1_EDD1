#pragma once
#include "TDALista.h"
#include "Node.h"

class LinkedList : public TDALista
{
protected:
	Node* inicio;
	Node* final;
	int	n;
public:
	LinkedList();
	virtual bool inserta(int,Object*);
	virtual void imprime();	
	virtual Object* buscar(Object*);
	virtual Object* borrar(int);
	virtual bool vacia();
	virtual Object* obtener(int) ;
	virtual Object* siguiente(int);
	virtual Object* anterior(int);
	virtual void anula();
	~LinkedList();
	
};