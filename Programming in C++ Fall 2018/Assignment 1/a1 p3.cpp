/*
    CH08-320142
    a1 p3.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
using namespace std;
float abs(float x);
int main()
{
    float x;
    cin >> x;
    abs(x);
}
float abs(float x)
{
    if (x < 0)
    {
        x = x * (-1.0);
        cout << x << endl;
    }
    else
    {
        cout << x << endl;
    }
    return x;
}
/*
    If the input is larger than or equal to zero,
    the same float will be printed. Otherwise,
    the float will be multiplied with -1 and
    the positive result will be returned.
*/


