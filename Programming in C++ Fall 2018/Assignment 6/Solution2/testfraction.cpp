/*
    CH08-320142
    a6_p2_testfraction.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction d,e,f,g,h,i;
    cin >> d;
    cin >> e;
    //input for two objects
    if (d > e)
    {
        cout << d;
    }
    else
    {
        cout << e;
    }
    //compare two objects and print the greater one
    f = d + e;
    h = f;//= operator
    cout << h;
    //print addition of two fractions
    g = d-e;
    i = g;//= operator
    cout << i;
    //print difference of two fractions
    return 0;

}
