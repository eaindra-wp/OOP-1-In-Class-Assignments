/*
    CH08-320142
    a1 p1.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>

int main ()
{
    char country[50];
    std::cin >> country;
    std::cout <<"Your country is "<<country <<"."<< std::endl;
    return 0;
}
/*
    In this program, the name of the country input
    is added to the array country by using std::cin
    and the result is printed by using std::cout.
*/
