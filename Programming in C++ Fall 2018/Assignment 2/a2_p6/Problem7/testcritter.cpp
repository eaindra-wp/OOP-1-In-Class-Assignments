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
/*
    the error messages say that functions in the library
    are not declared.
*/

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;

	cout << endl << "Please enter data: " << endl;

	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	//getline(std::cin, name);
	c.setName(name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}
