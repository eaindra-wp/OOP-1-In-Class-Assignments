/*
    CH08-320142
    Critter.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	int age, grade;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	//two new setter methods
	void setAge(int newage);
	void setGrade(int newgrade);

	// getter method
	int getHunger();

	//two new getter methods
	int getAge();
	int getGrade();

	// service method
	void print();
};
