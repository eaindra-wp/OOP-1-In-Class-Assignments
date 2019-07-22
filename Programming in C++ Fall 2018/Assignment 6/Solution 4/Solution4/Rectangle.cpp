/*
    CH08-320142
    a6_p4_Rectangle.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	cout << "calcArea of the rectangle...\n";
	//output message
	return length*width;
}
//perimeter method
double Rectangle::calcPerimeter() const
{
    cout << "Perimeter of the rectangle...\n";
    return 2*(length+width);
}
