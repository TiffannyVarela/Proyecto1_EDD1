#include <iostream>
#include "Alumno.h"
using namespace std;

Alumno::Alumno():Object(){
	nombre = " ";
	cuenta = " ";
}

Alumno::Alumno(string nombre, string cuenta):Object(){
	this->nombre=nombre;
	this->cuenta=cuenta;
}

string Alumno::getNombre(){
	return nombre;
}

void Alumno::setNombre(string nuevo){
	nombre=nuevo;
}

string Alumno::getCuenta(){
	return cuenta;
}

void Alumno::setCuenta(string nuevo){
	cuenta=nuevo;
}

bool Alumno::equals(Object* x){
	Alumno* alumno = dynamic_cast<Alumno*>(x);
	if (cuenta.length() == alumno->getCuenta().length() && cuenta.compare(alumno->getCuenta())==0)
	{
		return true;
	}
	else{
		return false;
	}
}

string Alumno::toString(){
	string text = "Nombre: "+nombre+"\n"+"Cuenta: "+cuenta+"\n\n";
	return text;
}


Alumno::~Alumno(){
	cout<<"Alumno Eliminado"<<endl;
}
