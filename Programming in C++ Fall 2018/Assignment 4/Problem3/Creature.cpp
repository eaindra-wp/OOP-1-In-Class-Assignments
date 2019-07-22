/*
    CH08-320142
    a4_p3_Creature.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;
Creature::Creature(): distance(10)
{
    cout << "creature constructor being called" << endl;
}
void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}
Creature::~Creature()
{
    cout << "creature destructor being called" << endl;
    delete &distance;
}
Wizard::Wizard() : distFactor(3)
{
    cout << "wizard constructor being called" << endl;
}
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
Wizard::~Wizard()
{
    cout << "wizard destructor being called" << endl;
    delete &distFactor;
}
//constructor for the new child class
Rabbit::Rabbit() : walk_disc(3)
{
    cout << "Rabbit constructor being called" << endl;
}
//new method for the new child class
void Rabbit::walk() const
{
    cout << "drinking  " << (walk_disc * distance) << " liters!\n";
}
//destructor for the new child class
Rabbit::~Rabbit()
{
    cout << "rabbit destructor being called" << endl;
    delete &walk_disc;
}
//constructor for the new child class
Cat::Cat() : eatamount(3)
{
    cout << "cat constructor being called" << endl;
}
//new method for the new child class
void Cat::eat() const
{
    cout << "eating " << (eatamount + (2*distance)) << " kilograms!\n";
}
//destructor for the new child class
Cat::~Cat()
{
    cout << "cat destructor being called" << endl;
    delete &eatamount;
}
