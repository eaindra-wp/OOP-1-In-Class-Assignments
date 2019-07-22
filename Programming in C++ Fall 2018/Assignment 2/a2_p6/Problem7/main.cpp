/*
    CH08-320142
    testcritter.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	int age, grade;

	cout << endl << "Please enter data: " << endl;

	cout << "Name: ";
	getline(cin, name);
	c.setName(name);
	c.setName(name);

	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	//ask for the age and add to the setter function
    cout << "Age: ";
	cin >> age;
	c.setAge(age);

	//ask for the grade and add to the setter function
    cout << "Grade: ";
	cin >> grade;
	c.setGrade(grade);

	cout << "You have created:" << endl;
	c.print();
	//calling the print function
    return 0;
}
