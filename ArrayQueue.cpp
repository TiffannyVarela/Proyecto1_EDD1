#include <iostream>
#include <string>
#include "ArrayQueue.h"
#include "TDACola.h"
using namespace std;

ArrayQueue::ArrayQueue(){
	tam = 1000;
	array = new Object*[tam];
	frente = final =0;
}

void ArrayQueue::encolar(Object* x){
	if (tam==final)
	{
		cout<<"Lleno"<<endl;
	}
	else{
		array[final]=x;
		final++;
	}
}

Object* ArrayQueue::desencolar(){
	if (vacia())
	{
		return NULL;
	}
	else{
		Object* retVal = array[frente];
		for (int i = 0; i < final-1; i++)
		{
			array[i]=array[i+1];
		}
		final--;
		return retVal;
	}
}

Object* ArrayQueue::verTope(){
	if (!vacia())
	{
		Object* retVal = array[frente];
		return retVal;
	}
	else{
		return NULL;
	}
}

bool ArrayQueue::vacia(){
	if (frente-1==final)
	{
		return true;
	}
	else{
		return false;
	}
}

void ArrayQueue::imprime(){
	Alumno* a;
	if (!vacia())
	{
		for (int i =frente ; i <final; i++)
		{
			a = dynamic_cast<Alumno*>(array[i]);
			cout<<"Posicion "<<i<<":"<<endl;
			cout<<a->toString();
		}
	}
	else{
		cout<<"No contiene valores"<<endl;

	}
}

ArrayQueue::~ArrayQueue(){
	for(int i = frente ; i < final;i++ )
		delete array[i];
	delete[] array;
}

	