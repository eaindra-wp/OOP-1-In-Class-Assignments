/*
    CH08-320142
    a6_p3_Square.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include "Square.h"
#include <iostream>
using namespace std;
Square::Square(const char* n, double s) : Rectangle(n,s,s)
{
    cout << "Parametric constructor called\n";
    side = s;
}
Square::~Square()
{
}
double Square::calcArea() const {
	cout << "calcArea of the square..."<<endl;;
	//output message
	return side*side;
}
//perimeter method
double Square::calcPerimeter() const
{
    cout << "Perimeter of the square.."<<endl;
    return 4*side;
}

