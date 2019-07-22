/*
    CH08-320142
    a6_p3_Area.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

Area::Area(const char* n) {
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
	//output message
}

Area::~Area() {
}

void Area::getColor() const {
	cout << "\n" << color << ": ";
}
