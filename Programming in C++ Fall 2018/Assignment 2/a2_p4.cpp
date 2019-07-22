/*
    CH08-320142
    a2_p4.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main()
{
    int i, j, k, try_times;
    srand(time(0));
    char m;
    string arr[17] = {"computer", "television", "keyboard",
                        "laptop", "mouse", "phone", "ring", "umbrella", "goggle", "element",
                        "kitty", "strong", "week", "binary", "worker", "president", "cheap"
                       };//17 different words in a 2D array of strings
    string question[17] = arr;
    //copying the elements in the array to a new array
    for (i = 0 ; i < 17 ; i++)
    {
        for (j = 0; j < 30 ; j++)
        {
            m = question[i][j];
            if (m == 'a' || m == 'e' || m == 'i'
                    || m == 'o' || m == 'u' || m == 'A'
                    || m == 'E' || m == 'I' || m == 'O'
                    || m == 'U')
            {
                question[i][j]= '_' ;
            }
            //changing the vowels in the words in a copy array with '_'
        }
    }
    string input, quit;
    int random = rand() % 17;
    //creating a random array number
    cout << question[random] << endl;
    //print a random word in the copy array with missing vowels
    try_times = 0;
    for (k = 0; k < 50; k++)
    {
        try_times++;
        //to count the number of tries
        getline(cin, input);
        //asking the input answer from the user
        if (input == arr[random])
        {
            //if the answer is same as the original element, the user wins
            cout << "Congratulations! You have guessed correctly" << endl;
            cout << "Number of tries= " << try_times << endl;
            cout << "Do you want to quit the game?" << endl;
            //to ask whether the user wants to continue or not
            getline(cin, quit);
            //if the input is "quit", then the program will stop.
            if (quit == "quit")
            {
                break;
            }
            else
            {
                //otherwise, another random word will be shown up and the user can continue
                cout << "Please guess another word." << endl;
                try_times = 0;
                random = rand() % 17;
                cout << "\n" << question[random] << endl;
                continue;
            }
        }
        /*
            if the guess is wrong, the loop will continue and the user will
            be asked to guess a new random word.
        */
        else
        {
            cout << "Please try again." << endl;
        }
    }
    return 0;
}


