/*
    CH08-320142
    a6_p2_fraction.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"
using namespace std;
Fraction::Fraction()
{
	num = 1;
	den = 1;
}
Fraction::Fraction(int n, int d)
{
	num = n / gcd(n,d);
	den = d / gcd(n,d);
}
Fraction::Fraction(const Fraction& cp)
{
    num = cp.num;
    den = cp.den;
}
Fraction::~Fraction()
{
    cout << "Destructor.." << endl;
}
int Fraction::gcd(int a, int b)
{
    //check for negative inputs
    if (a < 0)
    {
        a=a*(-1);
    }
    else if (b < 0)
    {
        b=b*(-1);
    }
    //gcd for two numbers working recursively
    else if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else if(a > b)
    {
        return gcd(a-b, b);
    }
    return gcd(a,b-a);
}
int Fraction::lcm(int a, int b)
{
    //check for negative inputs
    if (a < 0)
    {
        a = a * (-1);
    }
    else if (b < 0)
    {
        b = b * (-1);
    }
    return a*b / gcd(a, b);
}
//<<operator
ostream& operator<<(ostream& out, const Fraction& s)
{
    char sym = '/';
    out << "The result is ";
    out << s.num << sym << s.den << endl;
    return out;
}
//>>operator
istream& operator>>(istream& in, Fraction& g)
{
    char symbol;
    cout << "Type a fraction: ";
    in >> g.num >> symbol >> g.den;
    if (symbol != '/')
    {
        cout << "This is not a fraction.Try again!"<<endl;
        cin >> g;
    }

    return in;
}
//*operator
Fraction Fraction::operator*(Fraction mul)
{
    Fraction mres;
    int d,n;
    //returning the result in the simplest form
    n = this->num * mul.num;
    d = this->den * mul.den;
    mres.den = d / gcd(n,d);
    mres.num = n / gcd(n,d);
    return mres;
}
// /operator
Fraction Fraction::operator/(Fraction div)
{
    Fraction dres;
    int d,n;
    //returning the result in the simplest form
    n = this->num * div.den;
    d = this->den * div.num;
    dres.den = d / gcd(n,d);
    dres.num = n/ gcd(n,d);
    return dres;
}
//addition overloaded operator
Fraction Fraction::operator+(Fraction add)
{
    Fraction ares;
    int nn, dd;
    nn = (num*lcm(den,add.den)/den)+
    (add.num*lcm(den,add.den)/add.den);
    dd = lcm(den,add.den);
    ares.num = nn / gcd(nn,dd);
    ares.den = dd / gcd(nn,dd);
    return ares;
}
//subtraction overloaded operator
Fraction Fraction::operator -(Fraction sub)
{
    Fraction sres;
    int nn,dd;
    nn= (num*lcm(den,sub.den)/den) -
    (sub.num*lcm(den,sub.den)/sub.den);
    dd = lcm(den,sub.den);
    //check if the result of numerator is negative
    if (nn < 0)
    {
        //to return the correct and simplest form of the negative number
        nn = nn * (-1);
        sres.num = nn / gcd(nn,dd);
        sres.num = sres.num * (-1);
    }
    else
    {
        sres.num = nn / gcd(nn,dd);
    }
    sres.den = dd / gcd(nn,dd);
    return sres;
}
//=overloaded operator
Fraction& Fraction::operator=(const Fraction& cpy)
{
    num = cpy.num;
    den = cpy.den;
    return *this;
}
//<overloaded operator
bool Fraction::operator<(Fraction les)
{
    return((double)this->num/this->den < (double)les.num/les.den);
}
bool Fraction::operator>(Fraction les)
{
    return((double)this->num/this->den > (double)les.num/les.den);
}



