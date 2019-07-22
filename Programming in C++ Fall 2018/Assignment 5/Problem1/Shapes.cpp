/*
    CH08-320142
    a5_p1_Shapes.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std;

Shape::Shape(const string& n) : name(n)
{
}
Shape::Shape(const Shape& cpy)
{
    name = cpy.name;
}
void Shape::printName() const
{
    cout << name << endl;
}
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}
Circle::Circle(const string& n, double nx, double ny, double r) :
    CenteredShape(n,nx,ny)
{
    Radius = r;
}
//constructor with parameters
Hexagon::Hexagon(const string& n, double nx, double ny, const double nt, const string ncolor) :
    RegularPolygon(n,nx,ny,6)
{
    color = ncolor;
    t = nt;
}
//copy constructor
Hexagon::Hexagon(const Hexagon& cpy) : RegularPolygon(cpy.name,cpy.x,cpy.y,6)
{
    color = cpy.color;
    t = cpy.t;
}
//destructor
Hexagon::~Hexagon()
{
    cout << "Destructor being called\n";
}
//setter methods
void Hexagon::setColor(const string newcolor)
{
    color = newcolor;
}
void Hexagon::setSide(const double newside)
{
    t = newside;
}
//getter methods
string Hexagon::getColor() const
{
    return color;
}
double Hexagon::getSide() const
{
    return t;
}
//function to calculate the perimeter
double Hexagon::perimeter()
{
    return 6 * t;
}
double Hexagon::area()
{
    return (3 * sqrt(3) * t * t) / 2;
}
void Hexagon::printHexa()
//print function
{
    cout << "Perimeter for " << this->color << "=";
    cout << this->perimeter() << endl;
    cout << "Area for " << this->color << "=";
    cout << this->area() << "\n" << endl;
 }
