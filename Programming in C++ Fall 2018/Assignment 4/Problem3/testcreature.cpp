/*
    CH08-320142
    a4_p3_testcreature.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;
int main()
{
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    //one instance for the Wizard class
    cout << "\nCreating an instance for Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //two instances for the first created class
    cout << "\nCreating first instance for Rabbit.\n";
    Rabbit r1;
    r1.run();
    r1.walk();

    cout << "\nCreating second instance for Rabbit.\n";
    Rabbit r2;
    r2.run();
    r2.walk();

    //two instances for the second created class
    cout << "\nCreating first instance for Cat.\n";
    Cat cc1;
    cc1.run();
    cc1.eat();
    cout << "\n";

    cout << "\nCreating second instance for Cat.\n";
    Cat cc2;
    cc2.run();
    cc2.eat();
    cout << "\n";
    return 0;
}
