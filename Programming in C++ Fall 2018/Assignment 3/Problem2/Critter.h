/*
    CH08-320142
    a3_p2_Critter.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <string>
using namespace std;
class Critter
{
private:  // data members are private
    std::string name;
    int hunger;
    int boredom;
    double height;

public: // business logic methods are public
    // constructors
    Critter(string n);
    Critter(string n, int hu, int bo, double he = 10);
    /*
        if the value for height parameter is not declared,
        the default height 10 will be set.
    */
    Critter();

    // setter methods
    void setName(string newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);

    // getter methods
    int getHunger();
    double getHeight();
    int getBoredom();
    // service method
    void print();
};
