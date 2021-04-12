#include <iostream>
#include <string>
#include"Singleton218.h"
using namespace std;

void fun() 
{
    Singleton218* s = Singleton218::getinstance();
    s->setname("Bob");
}

int main()
{
    Singleton218* t = Singleton218::getinstance();
    t->setname("Alice");
    fun();
    cout << t->getname() << endl;
    system("pause");
    return 0;
}


