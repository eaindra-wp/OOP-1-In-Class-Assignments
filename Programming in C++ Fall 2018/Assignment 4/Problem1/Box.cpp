/*
    CH08-320142
    a4_p1_Box.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "Box.h"

using namespace std;
//setter functions
void Box::setHeight(double newheight)
{
    height= newheight;
}
void Box::setDepth(double newdepth)
{
    depth = newdepth;
}
void Box::setWidth(double newwidth)
{
    width = newwidth;
}

//getter functions
double Box:: getHeight()
{
    return height;
}
double Box:: getDepth()
{
    return depth;
}
double Box:: getWidth()
{
    return width;
}
//print function to print the volume of inputs
void Box::print()
{
    double volume;
    volume = height * width * depth;
    cout << "The volume is " << volume << endl;
}

//empty constructor
Box::Box()
{
    height = 0;
    width = 0;
    depth = 0;
}
//constructor with variables
Box::Box(double h, double w, double d)
{
    height= h;
    width = w;
    depth = d;
}
//copy constructor
Box::Box(const Box& src)
{
    height = src.height;
    width = src.width;
    depth = src.depth;
}
//destructor
Box::~Box()
{

}
