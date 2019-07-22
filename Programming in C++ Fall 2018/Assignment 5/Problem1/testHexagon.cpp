/*
    CH08-320142
    a5_p1_testHexagon.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"
using namespace std;

int main()
{
    Hexagon a("First Hexagon", 3, 4, 9, "Blue");
    //first hexagon object
    Hexagon b("Second Hexagon", 3, 4, 15, "Green");
    //second hexagon object
    Hexagon c(b);//calling by the copy constructor

    //print perimeters and areas
    a.printHexa();
    b.printHexa();
    c.printHexa();
    return 0;
}
