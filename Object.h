#pragma once

#include <string>
using std::string;

class Object
{
public:
	Object();
	virtual bool equals(Object*);
	virtual string toString();
	~Object();
	
};
