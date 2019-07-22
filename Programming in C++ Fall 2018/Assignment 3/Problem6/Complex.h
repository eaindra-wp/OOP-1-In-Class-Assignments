/*
    CH08-320142
    a3_p6_Complex.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
class Complex {

private:
	float real;  // real value
	float imag;  // imag value

public:
	Complex(); // empty constructor
	Complex(float, float); // constructor taking values for real and imag
	Complex(const Complex&); // copy constructor
    ~Complex(); //destructor

    //setter methods
	void setReal(float newreal);
	void setImag(float newimag1);
	void setConjugate(float , float);

	//getter methods
	double getReal();
	double getImag();

	//prototypes for calculation
	Complex add(Complex);
    Complex subtract(Complex);
    Complex multiply(Complex);

	void print();              // prints it to the screen
};
