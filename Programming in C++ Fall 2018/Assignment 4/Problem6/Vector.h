/*
    CH08-320142
    a4_p6_Vector.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
using namespace std;

class Vector{
private://size and pointer as properties
    int Size;
    double *p;
public:
    Vector();
    Vector(int Size, double *p);
    Vector(const Vector&);
    ~Vector();
    void setSize(int newsize);
    void print() const;

    int getSize() const;
    double norm() const;
    Vector add(const Vector) const;

};
