/*
    CH08-320142
    a3_p4_Critter.h
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
    //hunger variable type changed
    int boredom;
    double height;
    double thirst;

public: // business logic methods are public
    // constructors
    Critter(string n);
    Critter(string n, double hu, int bo, double he=10);
    Critter(string n, double hu, int bo, double he, double th);
    Critter();

    // setter methods
    void setName(string newname);
    void setHunger(double newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    void setThirst(double newthirst);

    // getter methods
    double getHunger();
    double getHeight();
    int getBoredom();
    double getThirst();
    // service method
    void print();
};
