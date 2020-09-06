#include <iostream>
#include "Simbolo.h"
#include <string>
using std::cout;
using std::endl;

Simbolo::Simbolo():Object(){
	char simbol=' ';
}

Simbolo::Simbolo(char simbol){
	this->simbol=simbol;
}

char Simbolo::getSimbol(){
	return simbol;
}

void Simbolo::setSimbol(char cambio){
	simbol=cambio;
}

bool Simbolo::equals(Object* x){
	Simbolo* simbolo = dynamic_cast<Simbolo*>(x);
	if (simbol==simbolo->getSimbol())
	{
		return true;
	}
	else{
		return false;
	}
}

string Simbolo::toString(){
	string sim(1,simbol);
	string text = "Simbolo: "+sim+"\n\n";
	return text;
}

Simbolo::~Simbolo(){
	cout<<"Simbolo Eliminado"<<endl;
}