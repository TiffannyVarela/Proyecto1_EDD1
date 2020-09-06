#pragma once
#include "Alumno.h"
#include "Object.h"

class TDACola
{
public:
	virtual void encolar(Object*)=0;
	virtual Object* desencolar()=0;
	virtual Object* verTope()=0;
	virtual bool vacia()=0;
	virtual void imprime()=0;	
	~TDACola();
	
};