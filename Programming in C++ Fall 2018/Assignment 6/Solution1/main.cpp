/*
    CH08-320142
    a6 p1.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//function for randomly choosing the color
int chooseColor()
{
    int randomNumber;
    int randColor;
    randomNumber = rand();
    randColor = randomNumber % 4;
    //choose a random number between 0 and 3;
    return randColor;
    //print the random color from the array
}
int main()
{
    int count = 1;
    string color[4] = {"RED","BLACK","VIOLET","BLUE"};
    srand(static_cast<unsigned int>(time(0)));
    /*
        this is remained in the main function, so that the random
        number changes.
    */
    while (count < 16)
    //calling the function 15 times and print the random color
    {
        cout << count << ": " << color[chooseColor()] << endl;
        count++;
    }
    return 0;
}
