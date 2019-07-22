/*
    CH08-320142
    a6_p3_testvirtual.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 7;
int main() {
	Area *list[num_obj];
	//(1)an array object of 6 spaces for variables is created
	int index = 0;
	/*(2)initialize an integer for the first
	array index to add the total area and perimeter*/
	double sum_area = 0.0;
	/*(3)initialize the total area to be zero since there
	is not area to be added yet*/
	double sum_perimeter = 0.0;
	cout << "Creating Ring: ";
	/*
	(4)objects for the ring,circle,rectangle child classes
	are crated using parametric constructors
	*/
	Ring blue_ring("BLUE", 5, 2);
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square blue_square("BLUE",5);
	//(5)placing the objects to the array indexes in order
	list[0] = &blue_ring;
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &blue_square;

	while (index < num_obj) {
        //(7)accessing the values in the array using a loop
		(list[index])->getColor();
        //(8)printing the color variable for each object in the array
		sum_area += (list[index])->calcArea();
		//(9)adding the area of each object to the total area
		sum_perimeter += (list[index])->calcPerimeter();
		index++;
	}
	cout << "\n\nThe total area is "
			<< sum_area << " units " << endl;
			//(9)printing the total area of all objects
    cout << "The total perimeter is "
			<< sum_perimeter << " units " << endl;
	return 0;
}
/*
    ______       ________      ______      ___________       ________
    |Ring|  <--  |Circle|  <-- |Area|  --> |Rectangle|  -->  |Square|
    |____|       |______|      |____|      |_________|       |______|

*/
