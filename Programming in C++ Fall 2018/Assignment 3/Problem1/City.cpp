/*
    CH08-320142
    a3_p1_City.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "City.h"

//setter functions for name, inhabitant, mayor and area
void City:: setName(std::string newname)
{
    name = newname;
}
void City:: setInhabitants(int newinhabitants)
{
    inhabitants = newinhabitants;
}
void City:: setMayor(std::string newmayor)
{
    mayor = newmayor;
}
void City:: setArea(double newarea)
{
    area = newarea;
}

//getter functions for name, inhabitant, mayor and area
std::string City:: getName()
{
    return name;
}
int City:: getInhabitants()
{
    return inhabitants;
}
std::string City:: getMayor()
{
    return mayor;
}
double City:: getArea()
{
    return area;
}

