/*
    CH08-320142
    a4_p4_Creature.h
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
		Rabbit();
		void walk() const;
		~Rabbit();

	private:
		int walk_disc;
};
//new child class from Creature
class Cat : public Creature {
	public:
		Cat();
		void eat() const;
		~Cat();

	private:
		int eatamount;
};

