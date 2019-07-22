/*
    CH08-320142
    a4_p6_Vector.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector()//default constructor
{
}
Vector::Vector(int size1, double *p)//constructor with parameter
{
    Size = size1;
    p = new double[Size];
    cout << "Parameter constructor" << endl;
    for (int i = 0; i < Size; i++)
    {
        cin >> this->p[i];
    }
}
Vector::Vector(const Vector& ssize)//copy constructor
{
    Size = ssize.Size;
    p = new double[Size];
    cout << "Copy Constructor"<< endl;
    for (int j = 0; j < Size; j++)
    {
        cin >> p[j];
    }
}
Vector::~Vector()//destructor
{
    delete []p;
}
Vector Vector::add(const Vector v) const
{
    double* addition;
    addition = new double[Size];
    for (int i = 0; i < Size; i++)
    {
        addition[i] = this->p[i] + v.p[i];
    }
}
//print functions for vectors
void Vector::print() const
{
    cout << "Components of the vector: ";
    for (int i = 0; i < Size; i++)
    {
        cout << p[i] << " ";
    }
    cout << "\n";
}
int Vector::getSize() const
{
    return Size;
}
