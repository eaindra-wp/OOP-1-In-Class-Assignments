/*
    CH08-320142
    a1 p5.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
using namespace std;
int main()
{
    bool c;
    c = true;
    string s, print;
    do
    {
        getline(cin, s);
        if (s == "quit")
        {
            c = false;
            s = "";
            /*
                if the input string is equal to "quit", the loop will stop
                and the last string will be changed to "".
            */
        }
        print = print + s;
        /*
            As long as the function is true, the loop will continue and the
            new string will be added to the existing string.
        */
    }
    while(c);
    cout << print << endl;
    //the concatenated string will be printed out after the loop has ended.
}
