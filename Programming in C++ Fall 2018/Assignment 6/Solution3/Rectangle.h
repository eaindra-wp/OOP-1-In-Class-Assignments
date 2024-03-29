/*
    CH08-320142
    a6_p3_Rectangle.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

class Rectangle : public Area {
	public:
		Rectangle(const char *n, double a, double b);
		~Rectangle();
		double calcArea() const;
		double calcPerimeter() const;
		//perimeter method
	private:
		double length;
		double width;
};

#endif
