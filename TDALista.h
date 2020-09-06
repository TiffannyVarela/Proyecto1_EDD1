#pragma once
#include"Alumno.h"
#include "Object.h"
class TDALista
{
public:
	virtual bool inserta(int,Object*)=0;
	virtual void imprime()=0;
	virtual Object* buscar(Object*)=0;
	virtual Object* borrar(int)=0;
	virtual bool vacia()=0;
	virtual Object* obtener(int) =0;
	virtual Object* siguiente(int)=0;
	virtual Object* anterior(int)=0;
	virtual void anula()=0;
	~TDALista();
	
};