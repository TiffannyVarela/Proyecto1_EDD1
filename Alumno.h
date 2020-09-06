#pragma once
#include <string>
#include "Object.h"
using namespace std;

class Alumno : public Object
{
	private:
		string nombre, cuenta;
	public:
		Alumno();
		Alumno(string, string);
		//Alumno* Nuevo(string, string);
		string getNombre();
		void setNombre(string);
		string getCuenta();
		void setCuenta(string);
		bool equals(Object*);
		string toString();
		~Alumno();
};