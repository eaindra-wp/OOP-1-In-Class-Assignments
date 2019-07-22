/*
    CH08-320142
    a4_p5_testshapes.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/


#include "Shapes.h"
#include <iostream>

int main(int argc, char** argv)
{
    //instances for circle, rectangle and square classes
    Circle c("circle", 3, 4, 7);
    Rectangle r("rectangle", 3, 4, 8, 3);
    Square s("Square", 3, 4, 5);

    //print the perimeter and area of the circle
    c.printName();
    cout << "Perimeter= " << c.perimeter() << endl;
    cout << "Area= " << c.area() << "\n"<< endl;

    //print the perimeter and area of the rectangle
    r.printName();
    cout << "Perimeter= " << r.perimeter() << endl;
    cout << "Area= " << r.area() << "\n"<< endl;

    //print the perimeter and area of the square
    s.printName();
    cout << "Perimeter= " << s.perimeter() << endl;
    cout << "Area= " << s.area() << "\n"<< endl;
}
