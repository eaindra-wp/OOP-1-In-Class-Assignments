/*
    CH08-320142
    a3_p6_testcomplex.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

int main() {
    float a, b, c, d;
    cout << "Add the real value for the first instance" << endl;
    cin >> a;
    cout << "Add the imag value for the first instance" << endl;
    cin >> b;
    cout << "Add the real value for the second instance" << endl;
    cin >> c;
    cout << "Add the imag value for the second instance" << endl;
    cin >> d;
	Complex c1, c2, c3, c4, c5;

	c1.setReal(a);
	c1.setImag(b);
	cout << "First instance: ";
    c1.print();
    c2.setReal(c);
	c2.setImag(d);
	cout << "Second instance: ";
	c2.print();
    cout << "\n";

	c1.setConjugate(a, b);
	cout << "Conjugate for the first instance: ";
	c1.print();
	cout << "\n";

	/*
        setting values again, so that the calculations will
        be done with original values of the first complex number.
    */
	c1.setReal(a);
	c1.setImag(b);
	c3 = c1.add(c2);//adding two complex numbers
	cout << "Addition: ";
	c3.print();
	c4= c2.subtract(c1);//subtracting two complex numbers
	cout << "Difference: ";
	c4.print();
	c5 = c1.multiply(c2);//multiplying two complex numbers
	cout << "Multiplication: ";
	c5.print();
	return 0;
}
