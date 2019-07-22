/*
    CH08-320142
    a3_p1_City.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <string>
class City
{
    //properties for the program
    private :
        std::string name;
        int inhabitants;
        std::string mayor;
        double area;


    public :
        //setter functions
        void setName(std::string newname);
        void setInhabitants(int newinhabitants);
        void setMayor(std::string newmayor);
        void setArea(double newarea);

        //getter functions
        std::string getName();
        int getInhabitants();
        std::string getMayor();
        double getArea();
};
