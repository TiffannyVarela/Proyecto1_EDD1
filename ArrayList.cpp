#include <iostream>
#include <string>
#include "ArrayList.h"
using namespace std;

ArrayList::ArrayList(){
	tam=1024;
	n=0;
	arreglo = new Object*[tam];
}


bool ArrayList::inserta(int p,Object* x){
	if (p>=1 && p<=n+1)
	{
		if (p==n+1)
		{
			arreglo[p]=x;
			n++;
		}
		else{
			for (int i = p; i>=0; i--)
			{
				arreglo[i+1] = arreglo[i];
			}
			arreglo[p]=x;
			n++;
		}
		
		return true;
	}
	else{
		cout<<"Posicion no valida"<<endl;
		return false;
	}
}


void ArrayList::imprime(){
	Alumno* a;
	if (vacia())
	{
		cout<<"No se puede imprimir,esta vacia"<<endl;
	}
	else{
		for (int i = 1; i <=n; i++)
		{	
			a = dynamic_cast<Alumno*>(arreglo[i]);
			cout<<"Posicion "<<i<<":"<<endl;
			cout<<a->toString();
		}
	}
}

Object* ArrayList::buscar(Object* x){
	Alumno* alumno = dynamic_cast<Alumno*>(x);
	Alumno* a;
	for (int i = 1; i <= n; i++)
	{	a = dynamic_cast<Alumno*>(arreglo[i]);
		//a->getCuenta().length() == alumno->getCuenta().length() && a->getCuenta().compare(alumno->getCuenta())==0
		if (alumno->equals(a))
		{
			cout<<"Posicion: "<<i<<endl;
			return arreglo[i];
		}
	}
	return NULL;
}

Object* ArrayList::borrar(int p){
	Object* x;
	if (p>=1 && p<=n)
	{
		x=arreglo[p];
		for (int i = 1; i<=n; i++)
		{
			if (i==p)
			{
				while(i<n){
					arreglo[i]=arreglo[i+1];
					i++;
				}
				break;
			}
				
		}
		n--;
		return x;
	}
	else{
		cout<<"Posicion no valida"<<endl;
		return NULL;
	}
}

bool ArrayList::vacia(){
	if (n==0)
	{
		return true;
	}
	else{
		cout<<"Cantidad de elementos "<<n<<endl;
		return false;
	}
}

Object* ArrayList::obtener(int p) {
	if (p>=1 && p<=n)
	{
		return arreglo[p];
	}
	else{
		return NULL;
	}
}

Object* ArrayList::siguiente(int p){
	return obtener(p+1);
}

Object* ArrayList::anterior(int p){
	return obtener(p-1);
}

void ArrayList::anula(){
	for(int i = 0 ; i < n;i++ )
		delete arreglo[i];
	
	n = 0;
}

ArrayList::~ArrayList(){
	for(int i = 0 ; i < n;i++ )
		delete arreglo[i];
		
	delete[] arreglo;
}
