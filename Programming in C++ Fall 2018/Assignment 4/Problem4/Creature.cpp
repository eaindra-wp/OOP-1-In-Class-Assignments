/*
    CH08-320142
    a4_p4_Creature.cpp
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
Rabbit::Rabbit() : walk_disc(3)//constructor for the new class
{
    cout << "Rabbit constructor being called" << endl;
}
void Rabbit::walk() const//method for the new class
{
    cout << "drinking  " << (walk_disc * distance) << " liters!\n";
}
Rabbit::~Rabbit()//destructor for the new class
{
    cout << "rabbit destructor being called" << endl;
    delete &walk_disc;
}
Cat::Cat() : eatamount(3)//constructor for the new class
{
    cout << "cat constructor being called" << endl;
}
void Cat::eat() const//method for the new class
{
    cout << "eating " << (eatamount + (2*distance)) << " kilograms!\n";
}
Cat::~Cat()//destructor for the new class
{
    cout << "cat destructor being called" << endl;
    delete &eatamount;
}
