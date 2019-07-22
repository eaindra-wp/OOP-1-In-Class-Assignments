/*
    CH08-320142
    a2_p2.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
using namespace std;
void swapping(int &a, int &b)
{
    int swapper = a;
    //using another integer variable to swap two integer
    a = b;
    b = swapper;
}
//swapping ints by using the real call-by-reference
void swapping(float &x, float &y)
{
    float helper = x;
    //using another float to swap two existing floats
    x = y;
    y = helper;
}
//swapping floats by using the real call-by-reference
void swapping(const char *&char1, const char *&char2)
{
    const char *help = char1;
    //using another const char pointer to swap two existing char pointers
    char1 = char2;
    char2 = help;
}
//swapping char pointers by using real call-by-reference
int main(void)
{
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}

