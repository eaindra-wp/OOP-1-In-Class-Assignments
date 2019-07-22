/*
    CH08-320142
    a3_p6_Complex.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex()    //default constructor
{
    real = imag = 0;
    cout << "default constructor is being called" << endl;
}
Complex::Complex(float r, float i) //constructor with parameters
{
    real = r;
    imag = i;
    cout << "constructor with parameters being called" << endl;
}
Complex::Complex(const Complex& p) //copy constructor
{
    real = p.real;
    imag = p.imag;
}
Complex::~Complex()
{
    //empty destructor
}
void Complex::setReal(float newreal) //setter for real part
{
    real = newreal;
}
void Complex::setImag(float newimag) //setter for imag part
{
    imag = newimag;
}
void Complex::setConjugate(float newreal, float newimag)
{
    real = newreal * (-1);
    imag = newimag * (-1);
    //setter method to give the conjugate of a complex number
}
Complex Complex::add(Complex p)
{
    return Complex(this->real + p.real, this->imag + p.imag);
    //returns addition result
}
Complex Complex::subtract(Complex p)
{
    return Complex(this->real - p.real, this->imag - p.imag);
    //returns difference result
}
Complex Complex::multiply(Complex p)
{
    return Complex(((this->real*p.real)-(this->imag*p.imag)),((this->imag*p.real)+(this->real*p.imag)));
    //returns multiplication result
}
double Complex::getReal()//getter for the real part
{
    return real;
}
double Complex::getImag()//getter for the imag part
{
    return imag;
}
void Complex::print()//print method
{
    if (imag)
        cout << noshowpos << real << showpos << imag << "i" << endl;
    else
        cout << noshowpos << real << showpos << endl;
}
