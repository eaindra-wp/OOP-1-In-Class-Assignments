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
    cout << "\n";
	//calling the constructor with name parameter
	Critter *c;
    c = new Critter("pooey");
	c->print();
	cout << "\n";
	//calling the constructor with all parameters
	Critter *b;
	b = new Critter("Kitty" , 10, 2, 6);
	b->print();
    cout << "\n";
	//calling the constructor without specifying the height
	Critter *d;
	d = new Critter("Kitty" , 10, 2);
    d->print();
    cout << "\n";
    cout << "\n\n";

    //setting the hunger level for each object call to 2
    a->setHunger(2);
    a->print();
    cout << "\n";
    c->setHunger(2);
    c->print();
    cout << "\n";
    b->setHunger(2);
    b->print();
    cout << "\n";
    d->setHunger(2);
    d->print();
    cout << "\n\n";
    return 0;

}
