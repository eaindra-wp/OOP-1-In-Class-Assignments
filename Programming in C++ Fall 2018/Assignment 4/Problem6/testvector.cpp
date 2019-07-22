/*
    CH08-320142
    a4_p6_testvector.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    int s;
    cout << "Type the size of two vectors: ";
    cin >> s;
    double *p;

    Vector v1, v2, v3, v4;
    v1 = Vector(s, p);
    v1.print();

    v2 = v1;
    v2.print();

    v3 = Vector(v1);
    v3.print();

    v4 = v1.add(v3);
    v4.print();
    return 0;
}
