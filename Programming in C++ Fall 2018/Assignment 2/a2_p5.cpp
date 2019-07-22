/*
    CH08-320142
    a2_p5.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include <cstring>
using namespace std;
bool isPalindrome(string s)
{
    bool c= true;
    int length= s.length();
    for (int i = 0; i < length; i++)
    {
        s[i] = tolower(s[i]);
        //change the uppercase letters to lowercases
        if (s[i] != s[length-1-i])
        {
            c = false;
        }
        /*
            if the first and last letter are different,
            boolean false will be returned.
            If not, true will be returned.
        */
    }
    return c;
}
int main()
{
    string test;
    getline(cin, test);
    //ask for a word from the user
    while (test != "exit")
    //the program will work until the input word is "exit"
    {
        bool k = isPalindrome(test);
        if (k == true)
        {
            //if the return bool is true, these messages will be printed
            cout << "Congratulations! This is a palindrome." << endl;
            cout << "Do you want to exit?" << endl;
            getline(cin, test);
        }
        else
        {
            //if the return bool is false, this message will be returned.
            cout << "This is not a palindrome. Please try again." << endl;
            getline(cin, test);
        }
    }
    return 0;
}
