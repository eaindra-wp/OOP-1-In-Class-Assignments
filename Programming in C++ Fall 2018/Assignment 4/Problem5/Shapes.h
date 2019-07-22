/*
    CH08-320142
    a4_p5_Shapes.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;

class Shape {			// base class
	private:
		string name;   // every shape will have a name
	public:
		Shape(const string&);  // builds a shape with a name
		Shape();					// default constructor
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
		void setName(string newname);
		string getName();

};

class CenteredShape : public Shape {  // inherits from Shape
	private:
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);
		CenteredShape();
		CenteredShape(const CenteredShape&);//copy constructor
		void move(double, double);
		// moves the shape, i.e. it modifies it center
		void setcenter(double nx, double ny);
		//setter method
		double getcenter();//getter method
};

class RegularPolygon : public CenteredShape {
    // a regular polygon is a centered_shape with a number of edges
	private:
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		void setEdgesNumber(int nl);//setter method
		int getEdgesNumber();//getter method
};

class Circle : public CenteredShape {
    // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		void setRadius(double nr);//setter method
		double getRadius();//getter method
        double perimeter();//method for perimeter
		double area();//method for area
};

//Rectangle class derived from RegularPolygon class
class Rectangle : public RegularPolygon {
	private:
		double width;
		double height;
		//private properties
	public:
		Rectangle(const std::string&, double, double, double, double);
		Rectangle();
		Rectangle(const Rectangle&);
		//setter methods
		void setwidth(double);
		void setheight(double);
		//getter methods
		double getwidth();
		double getheight();
        double perimeter();//method for perimeter
		double area();//method for area
};

//Square class derived from Rectangle class
class Square : public Rectangle {
	private:
        double side;//private property
	public:
		Square(const std::string&, double, double, double);
		Square();
		Square(const Square&);
		void setside(double);
		double getside();
        double perimeter();//method for perimeter
		double area();//method for area
};
#endif
