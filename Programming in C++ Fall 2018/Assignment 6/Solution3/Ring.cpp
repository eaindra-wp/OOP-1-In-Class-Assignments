/*
    CH08-320142
    a6_p3_Ring.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "Ring.h"
#include <cmath>
using namespace std;

Ring::Ring(const char *n, double outer, double inner)
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	cout << "calcArea of the ring..."<<std::endl;
	//output message
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}
//perimeter method
double Ring::calcPerimeter() const{
    cout << "Perimeter of the ring..."<<std::endl;;
    return ((2*M_PI*innerradius) + Circle::calcPerimeter());
}
