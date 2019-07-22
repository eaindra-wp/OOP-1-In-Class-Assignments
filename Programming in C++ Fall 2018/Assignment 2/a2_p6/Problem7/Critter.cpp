/*
    CH08-320142
    Critter.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;
Critter c;
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

//new void setter function for age
void Critter::setAge(int newage){
    age = newage;
}
//new void setter function for grade
void Critter::setGrade(int newgrade){
    grade = newgrade;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
	cout << "I am " << age << " years old." << endl;
	//printing out the age
	cout << "I am in Grade " << grade << "." << endl;
	//printing out the grade
}

int Critter::getHunger() {
	return hunger;
}

//returning new values, age and grade
int Critter::getAge(){
    return age;
}
int Critter::getGrade(){
    return grade;
}
