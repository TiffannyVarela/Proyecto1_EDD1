#include "ArrayStack.h"
#include <iostream>
#include <string>
using namespace std;

ArrayStack::ArrayStack(){
	tam=100;
	array = new Object*[tam];
	tope=0;
}

void ArrayStack::push(Object* x){
	if (tope>=tam-1)
	{
		cout<<"Sobrepasa Tamanio"<<endl;
	}
	else{
		array[++tope]=x;
		cout<<"Elemento Ingresado Exitosamente"<<endl;
	}
}

Object* ArrayStack::pop() {
	if (isEmpty())
	{
		cout<<"No hay elementos en la pila"<<endl;
		return NULL;
	}
	else{
		/*Object* resp = array[tope+1];
		array[tope]=array[tope-1];
		tope--;
		return resp;*/
		Object* resp = array[tope];
		tope--;
		return resp;
	}
}

Object* ArrayStack::top() {
	if (isEmpty())
	{
		cout<<"ArrayStack Vacio"<<endl;
		return NULL;
	}
	else{
		return array[tope-1];
	}
}

bool ArrayStack::isEmpty(){
	if (tope == 0)
	{
		return true;
	}
	else{
		return false;
	}
}

void ArrayStack::print(){
	Simbolo* simb;
	if (isEmpty())
	{
		cout<<"No se puede imprimir,esta vacia"<<endl;
	}
	else{
		for (int i = tope; i>=1; i--)
		{
			simb = dynamic_cast<Simbolo*>(array[i]);
			cout<<"Posicion "<<i<<":"<<endl;
			cout<<simb->toString();
		}
	}
}

void ArrayStack::clear(){
	for(int i = 0 ; i < tope;i++ )
		delete array[i];
		
	tope =0;
}

ArrayStack::~ArrayStack(){
	for(int i = 0 ; i < tope;i++ )
		delete array[i];
		
	delete[] array;
}