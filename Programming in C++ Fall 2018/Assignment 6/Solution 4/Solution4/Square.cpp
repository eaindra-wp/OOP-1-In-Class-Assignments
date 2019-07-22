/*
    CH08-320142
    a6_p4_Square.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include "Square.h"
#include <iostream>
using namespace std;
Square::Square(const char* n, double s) : Rectangle(n,s,s)
{
    side = s;
}
Square::~Square()
{
}
double Square::calcArea() const {
	cout << "calcArea of the square...\n";
	//output message
	return side*side;
}
//perimeter method
double Square::calcPerimeter() const
{
    cout << "Perimeter of the square...\n";
    return 4*side;
}

