/*
    CH08-320142
    a6_p3_Circle.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
		double calcPerimeter() const;
		//perimeter method
	private:
		double radius;
};

#endif
