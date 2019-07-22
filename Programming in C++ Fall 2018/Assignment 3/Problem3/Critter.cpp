/*
    CH08-320142
    a3_p3_Critter.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include "Critter.h"
#include <iostream>
#include <string>
using namespace std;

//setter methods
void Critter::setName(string newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger / 10.0;
}
void Critter::setBoredom(int newboredom) {
	boredom = newboredom;
}
void Critter::setHeight(double newheight) {
	height = newheight;
}
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
	cout << "My height is " << height << " and my boredom is " << boredom << "." << endl;
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
//default constructor
Critter::Critter() {
	name = "default_critter";
	hunger = 0.0;
	boredom = 0;
	height = 5;
	cout << "Default Constructor being called" << endl;
}
//constructor with name parameter
Critter::Critter(string n){
	name = n;
	hunger = 0.0;
	boredom = 0;
	height = 5;
	cout << "Constructor with name parameter being called" << endl;
}
//constructor with all parameters
Critter::Critter(string n, int hu, int bo, double he) {
	name = n;
    hunger = hu / 10.0;
	boredom = bo;
	height = he;
	cout << "Constructor with all parameters being called" << endl;
}


