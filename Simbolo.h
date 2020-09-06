#pragma once
#include <string>
#include "Object.h"
using namespace std;
class Simbolo : public Object
{
	private:
		char simbol;
	public:
		Simbolo();
		Simbolo(char);
		char getSimbol();
		void setSimbol(char);
		bool equals(Object*);
		string toString();
		~Simbolo();
};