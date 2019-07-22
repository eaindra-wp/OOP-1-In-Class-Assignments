/*
    CH08-320142
    a5_p1_Shapes.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
};

class CenteredShape : public Shape {  // inherits from Shape
	protected:
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	protected:
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon : public RegularPolygon {
    protected: //changed to protected to access
        double t;
        std::string color;
    public:
        //declaration of constructors
        Hexagon(const std::string&, double, double, const double, const std::string);
        Hexagon();
        Hexagon(const Hexagon&);
        ~Hexagon();
        //setter methods
        void setSide(const double newside);
        void setColor(const std::string newcolor);

        //getter methods
        std::string getColor() const;
        double getSide() const;
        double perimeter();//function to calculate perimeter
        double area();//function to calculate area
        void printHexa();
};

#endif
