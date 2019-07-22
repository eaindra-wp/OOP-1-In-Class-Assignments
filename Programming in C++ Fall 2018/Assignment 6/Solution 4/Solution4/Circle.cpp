/*
    CH08-320142
    a6_p4_Circle.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "Circle.h"
#include <cmath>

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...\n";
	return radius * radius * M_PI;
}
//perimeter method
double Circle::calcPerimeter() const
{
    std::cout << "Perimeter of the circle...\n";
    return 2*radius*M_PI;
}
