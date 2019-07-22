/*
    CH08-320142
    a4_p5_Shapes.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
#include <string>
#include <cmath>

using namespace std;

//default constructor for Shape class
Shape::Shape()
{
    name = "";
}
Shape::Shape(const string& n) : name(n)
{
}
//copy constructor
Shape::Shape(const Shape& str)
{
    name = str.name;
}
//setter for Shape class
void Shape::setName(string newname)
{
    name = newname;
}
string Shape::getName()
{
    return name;
}
void Shape::printName() const
{
    cout << name << endl;
}

//default constructor
CenteredShape::CenteredShape()
{
    x =0.0;
    y = 0.0;
}
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n)
{
    x = nx;
    y = ny;
}
//copy constructor for CenteredShape class
CenteredShape::CenteredShape(const CenteredShape& str)
{
    x = str.x;
    y = str.y;
}
void CenteredShape::setcenter(double nx, double ny)
{
    x = nx;
    y = ny;
}
//getter method for centeredshape class
double CenteredShape::getcenter()
{
    return x;
    return y;
}

//default constructor for RegularPolygon class
RegularPolygon::RegularPolygon()
{
    EdgesNumber = 0;
}
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}
//copy constructor for RegularPolygon class
RegularPolygon::RegularPolygon(const RegularPolygon& str)
{
    EdgesNumber = str.EdgesNumber;
}
//setter method for RegularPolygon class
void RegularPolygon::setEdgesNumber(int nl)
{
    EdgesNumber = nl;
}
//getter method
int RegularPolygon::getEdgesNumber()
{
    return EdgesNumber;
}

//default constructor for circle class
Circle::Circle()
{
    Radius = 0;
}
Circle::Circle(const string& n, double nx, double ny, double r) :
    CenteredShape(n,nx,ny)
{
    Radius = r;
}
//copy constructor for Circle class
Circle::Circle(const Circle& str)
{
    Radius = str.Radius;
}
//setter method
void Circle::setRadius(double nr)
{
    Radius = nr;
}
//getter method
double Circle::getRadius()
{
    return Radius;
}
//perimeter method for circle class
double Circle::perimeter()
{
    return (2 * M_PI * Radius);
}
//area method for circle class
double Circle::area()
{
    return (M_PI * Radius * Radius);
}

//default constructor for Rectangle class
Rectangle::Rectangle()
{
    height = 0.0;
}
//constructor with parameters
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) : RegularPolygon(n,nx,ny,4)
{
    width = nwidth;
    height = nheight;
}
//copy constructor for Rectangle class
Rectangle::Rectangle(const Rectangle& str)
{
    width = str.width;
    height = str.height;
}
//setter methods for rectangle child class
void Rectangle::setwidth(double nwidth)
{
    width = nwidth;
}
void Rectangle::setheight(double nheight)
{
    height = nheight;
}
//getter methods for rectangle child class
double Rectangle::getwidth()
{
    return width;
}
double Rectangle::getheight()
{
    return height;
}
//perimeter method for rectangle class
double Rectangle::perimeter()
{
    return (2*(height + width));
}
//area method for rectangle class
double Rectangle::area()
{
    return width * height;
}

//default constructor for the square class
Square::Square()
{
    side = 0;
}
//constructor with parameters
Square::Square(const string& n, double nx, double ny, double nside) : Rectangle(n,nx,ny,nside,nside)
{
    side = nside;
}
//copy constructor for Square class
Square::Square(const Square& str)
{
    side = str.side;
}
//setter method for square child class
void Square::setside(double nside)
{
    side = nside;
}
//getter method for square child class
double Square::getside()
{
    return side;
}
//perimeter method for square class
double Square::perimeter()
{
    return 4 * side;
}
//area method for square class
double Square::area()
{
    return side * side;
}
