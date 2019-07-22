/*
    CH08-320142
    a6_p2_fraction.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
    Fraction(const Fraction&);
    ~Fraction();

    //overloading operators
	friend std::ostream& operator<<(std::ostream&, const Fraction&);
	friend std::istream& operator>>(std::istream&, Fraction&);
	Fraction operator*(Fraction);
	Fraction operator/(Fraction);

	Fraction operator+(Fraction);
	Fraction operator-(Fraction);
	Fraction& operator=(const Fraction&);
	bool operator>(Fraction);
	bool operator<(Fraction);

};
#endif // FRACTION_H_INCLUDED
