/*
    CH08-320142
    a3_p3_Critter.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <string>
using namespace std;
class Critter
{
private:  // data members are private
    std::string name;
    double hunger;
    int boredom;
    double height;

public: // business logic methods are public
    // constructors
    Critter(string n);
    Critter(string n, int hu, int bo, double he=10);
    Critter();

    // setter methods
    void setName(string newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);

    // getter methods
    double getHunger();
    double getHeight();
    int getBoredom();
    // service method
    void print();
};
