/*
    CH08-320142
    a6_p4_Square.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED
#include "Rectangle.h"
#include <iostream>

//new square class inherited from rectangle class
class Square: public Rectangle
{
    public:
        Square();
        Square(const char* n, double s);
        ~Square();
        double calcArea() const;
        double calcPerimeter() const;
    private:
        double side;
};

#endif // SQUARE_H_INCLUDED
