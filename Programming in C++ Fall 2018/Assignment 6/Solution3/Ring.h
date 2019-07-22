/*
    CH08-320142
    a6_p3_Ring.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcArea() const;
		double calcPerimeter() const;
		//perimeter method
	private:
		double innerradius;
};

#endif
