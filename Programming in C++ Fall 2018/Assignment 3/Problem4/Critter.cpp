/*
    CH08-320142
    a3_p4_Critter.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include "Critter.h"
#include <iostream>
#include <string>
using namespace std;

//setter methods
void Critter::setName(string newname)
{
    name = newname;
}
void Critter::setHunger(double newhunger)
{
    hunger = newhunger / 10.0;
    //change the hunger value
}
void Critter::setBoredom(int newboredom)
{
    boredom = newboredom;
}
void Critter::setHeight(double newheight)
{
    height = newheight;
}
void Critter::setThirst(double newthirst)
{
    thirst = newthirst / 10.0;
}
void Critter::print()
{
    cout << "I am " << name << ". My hunger level is " << hunger * 10.0 << "." << endl;
    //return the original hunger level
    cout << "My height is " << height << " and my boredom is " << boredom << "." << endl;
    cout << "My thirst level is " << thirst * 10.0 << "." << endl;
}

//getter methods
double Critter::getHeight()
{
    return height;
}
int Critter::getBoredom()
{
    return boredom;
}
double Critter::getHunger()
{
    return hunger;
}
double Critter::getThirst()
{
    return thirst;
}
//default constructor
Critter::Critter()
{
    name = "default_critter";
    hunger = 0.0;
    boredom = 0;
    height = 5;
    thirst = 0;
    cout << "Default Constructor being called" << endl;
}
//constructor with name parameter
Critter::Critter(string n)
{
    name = n;
    hunger = 0.0;
    boredom = 0;
    height = 5;
    thirst = 0.0;
    cout << "Constructor with name parameter being called" << endl;
}
//constructor with four existing parameters
Critter::Critter(string n, double hu, int bo, double he)
{
    name = n;
    hunger = hu / 10.0;//change the hunger level by dividing with 10
    boredom = bo;
    height = he;
    thirst = getHunger();
    cout << "Constructor with four parameters being called" << endl;
}
//constructor with all parameters
Critter::Critter(string n, double hu, int bo, double he, double th)
{
    name = n;
    hunger = hu / 10.0;//change the hunger level by dividing with 10
    boredom = bo;
    height = he;
    thirst = th / 10;
    cout << "Constructor with all parameters being called" << endl;
}


