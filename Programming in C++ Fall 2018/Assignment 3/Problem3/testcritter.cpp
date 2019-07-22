/*
    CH08-320142
    a3_p2_testcritter.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main()
{
    string n;

    //calling the empty constructor
	Critter *a;
    a = new Critter();
	a->print();

	//calling the constructor with name parameter
	Critter *c;
    c = new Critter("pooey");
	c->print();

	//calling the constructor with all parameters
	Critter *b;
	b = new Critter("Kitty" , 10, 2, 6);
	b->print();

	//calling the constructor without specifying the height
	Critter *d;
	d = new Critter("Kitty" , 10, 2);
    d->print();

    cout << "\n";

    d->setHunger(2);
    d->print();

    b->setHunger(2);
    b->print();

    c->setHunger(2);
    c->print();

    a->setHunger(2);
    a->print();

}
