/*
    CH08-320142
    a4_p2.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();
		void run() const;
		~Creature();

	protected:
		int distance;
};
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
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)//constructor
{
    cout << "wizard constructor being called" << endl;
}
void Wizard::hover() const//method call
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
Wizard::~Wizard()//destructor
{
    cout << "wizard destructor being called" << endl;
}
//new child class from Creature
class Rabbit : public Creature {
	public:
		Rabbit();//constructor
		void walk() const;//method call
		~Rabbit();//destructor

	private:
		int walk_disc;//property of the child class
};
Rabbit::Rabbit() : walk_disc(3)//constructor
{
    cout << "Rabbit constructor being called" << endl;
}
void Rabbit::walk() const//method
{
    cout << "drinking " << (walk_disc * distance) << " liters!\n";
}
Rabbit::~Rabbit()//destructor
{
    cout << "rabbit destructor being called" << endl;
}
//new child class from Creature
class Cat : public Creature {
	public:
		Cat();//constructor
		void eat() const;//method call
		~Cat();//destructor

	private:
		int eatamount;//property of the child class
};
//new method for the child class
Cat::Cat() : eatamount(3)//constructor
{
    cout << "cat constructor being called" << endl;
}
void Cat::eat() const//method
{
    cout << "eating " << (eatamount + (2*distance)) << " kilograms!\n";
}
Cat::~Cat()//destructor
{
    cout << "cat destructor being called" << endl;
}

int main()
{
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    //one instance for the Wizard class
    cout << "\nCreating an instance Wizard.\n";
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
