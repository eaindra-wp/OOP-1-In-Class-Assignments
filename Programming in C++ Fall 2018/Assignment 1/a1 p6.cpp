/*
    CH08-320142
    a1_p6.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    cout << "Please type in your name." << endl;
    string name;
    getline(cin, name);
    cout << "Please type in a number between 1 and 100." << endl;
    int guess;
    cin >> guess;
    int check;
    int count = 0;
    int randomNumber; // init random number generator
    srand(static_cast <unsigned int >(time(0)));
    while (count < 100)
    {
        count++;
        randomNumber = rand();
        check = (randomNumber % 100) + 1;
        //to get a random number between 1 and 100.
        if (guess == check)
        //if the input number is equal to the random check, then the loop will stop.
        {
            cout << "Congratulations! You can guess correctly." << endl;
            break;
        }
        else if (guess < check)
        /*
            if the input number is lower than the random check,
            the user will be informed that the number is lower than
            the random number.
        */
        {
            cout << "Your number is too LOW. Please try again." << endl;
            cin >> guess;
            continue;
        }
        else if (guess > check)
        /*
            if the input number is higher than the random check,
            the user will be informed that the number is higher than
            the random number.
        */
        {
            cout << "Your number is too HIGH. Please try again." << endl;
            cin >> guess;
            continue;
        }
    }
    cout << "Please restart the game." << endl;
    //To show up if the user cannot guess the number correctly within the loop.
    return 0;
}
