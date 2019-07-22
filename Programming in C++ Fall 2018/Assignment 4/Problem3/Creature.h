/*
    CH08-320142
    a4_p3_Creature.h
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
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();

	private:
		int distFactor;
};

//new child class from Creature
class Rabbit : public Creature {
	public:
		Rabbit();//constructor
		void walk() const;//method call
		~Rabbit();//destructor

	private:
		int walk_disc;//property of the child class
};
//new child class from Creature
class Cat : public Creature {
	public:
		Cat();//constructor
		void eat() const;//method call
		~Cat();//destructor

	private:
		int eatamount;//property of the child class
};

