/*
    CH08-320142
    a4_p4_dyncreature.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "Creature.h"
using namespace std;
int main()
{
    cout << "Creating an Creature.\n";
    Creature* c;
    c = new Creature;
    c->run();
    while(1)
    {
        string input;
        getline(cin, input);
        if (input == "wizard")
        /*
            if wizard is typed in, the wizard object will be
            dynamically created.
        */
        {
            cout << "Creating a Wizard.\n";
            Wizard* w;
            w = new Wizard;
            w->run();
            w->hover();
            delete w;
            cout << "\n";
        }
        /*
            if object1 is typed in, the rabbit object (object1)
            will be dynamically created.
        */
        else if(input == "object1")
        {
            cout << "Creating a Rabbit.\n";
            Rabbit* r;
            r = new Rabbit;
            r->run();
            r->walk();
            delete r;
            cout << "\n";
        }
        /*
            if object2 is typed in, the cat object (object2)
            will be dynamically created.
        */
        else if(input == "object2")
        {
            cout << "Creating a Cat.\n";
            Cat* cc;
            cc = new Cat;
            cc->run();
            cc->eat();
            delete cc;
            cout << "\n";
        }
        else if(input == "quit")
        {
            break;
            //if quit is typed in, the program will stop executing.
        }
        else
        {
            cout << "type only wizard, object1 or object2" << endl;
        }
    }
    delete c;
    return 0;
}
