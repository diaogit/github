#pragma once
#include<iostream>
#include<string>
using namespace std;
class Singleton218
{
public:
	void setname(string str);
	string getname();
	string name;
	static Singleton218* getinstance();
	static Singleton218* instance;
};


