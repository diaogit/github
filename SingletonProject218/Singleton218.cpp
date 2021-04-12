#include "Singleton218.h"

void Singleton218::setname(string str)
{
	name = str;
}

string Singleton218::getname()
{
	return name;
}

Singleton218* Singleton218::getinstance()
{
	if (NULL == instance)
	{
		instance = new Singleton218();
	}
	return instance;
}
Singleton218* Singleton218::instance = NULL;

