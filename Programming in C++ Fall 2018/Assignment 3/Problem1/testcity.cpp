/*
    CH08-320142
    a3_p1_testcity.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include "City.h"

using namespace std;

int main()
{
    //creating an object for Bremen
    City Bremen;
    //calling setter functions for Bremen object
    Bremen.setName("Bremen");
    Bremen.setInhabitants(557464);
    Bremen.setMayor("Carsten Sieling");
    Bremen.setArea(326.7);
    //calling getter functions for Bremen object
    cout << "City: "<< Bremen.getName() << endl;
    cout << "Inhabitants: " << Bremen.getInhabitants() << endl;
    cout << "Mayor: " << Bremen.getMayor() << endl;
    cout << "Area: " << Bremen.getArea() << endl;
    cout << "\n";

    //creating an object for Paris
    City Paris;
    //calling setter functions for Paris object
    Paris.setName("Paris");
    Paris.setInhabitants(200000);
    Paris.setMayor("Anne Hidalgo");
    Paris.setArea(225.3);
    //calling getter functions for Paris object
    cout << "City: "<< Paris.getName() << endl;
    cout << "Inhabitants: " << Paris.getInhabitants() << endl;
    cout << "Mayor: " <<Paris.getMayor() << endl;
    cout << "Area: " << Paris.getArea() << endl;
    cout << "\n";

    //creating an object for London
    City London;
    //calling setter functions for London object
    London.setName("London");
    London.setInhabitants(30000);
    London.setMayor("Sadiq Khan");
    London.setArea(225.1);
    //calling getter functions for London object
    cout << "City: "<< London.getName() << endl;
    cout << "Inhabitants: " << London.getInhabitants() << endl;
    cout << "Mayor: " << London.getMayor() << endl;
    cout << "Area: "<< London.getArea() << endl;
    cout << "\n";

    return 0;
}
