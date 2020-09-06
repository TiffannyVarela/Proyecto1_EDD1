#pragma once

#include "TDALista.h"

class ArrayList : public TDALista
{
protected:
	Object** arreglo;
	int tam,n;

public:
	ArrayList();
	virtual bool inserta(int,Object*);
	virtual void imprime();
	virtual Object* buscar(Object*);
	virtual Object* borrar(int);
	virtual bool vacia();
	virtual Object* obtener(int) ;
	virtual Object* siguiente(int);
	virtual Object* anterior(int);
	virtual void anula();
	~ArrayList();
	
};