/*
    CH08-320142
    a2_p1.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include <cmath>
using namespace std;
int myfirst(int number1[], int n);
double myfirst(double number2[], int n);
char myfirst(char string1[], int n);

int main()
{
    int number1[5] = {1, 2, -5, 0, -9};
    double number2[5] = {-1.5, 5.5, -3.2, 6.35, 9.8};
    char string1[5] = {'e', 'l', 'o', 'k', 'h'};
    cout << myfirst(number1, 5) << endl;
    cout << myfirst(number2, 5) << endl;
    cout << myfirst(string1, 5) << endl;
    //calling the functions to print the return values
}
int myfirst(int number1[], int n)
{
    int j;
    for (int i = 0; i < n; i++)
    {
        //if an even number is found, the loop will stop and that found integer will be returned.
        if (number1[i] > 0 && number1[i] % 2 == 0)
        {
            j = number1[i];
            break;
        }
        else
        {
            j = -1;
            //otherwise, -1 will be returned.
        }
    }
    return j;
}
double myfirst(double number2[], int n)
{
    double k, intpart, fractpart;
    for (int i = 0; i < n; i++)
    {
        fractpart = modf (number2[i], &intpart);
        if (number2[i] < 0 && fractpart == 0)
        /*
            if the double is negative and does not contain the
            fraction part, then that double will be returned.
        */
        {
            k = number2[i];
            break;
        }
        else
        {
            //otherwise, -1.1 will be returned.
            k = -1.1;
        }
    }
    return k;
}
char myfirst(char string1[], int n)
{
    char c='0';
    for (int i = 0; i < n; i++)
    {
        char m = string1[i];
        //setting a variable to compare the element in the array successfully
        if ((m >= 'A' && m <= 'Z') || (m >= 'a' && m <= 'z'))
        {
            if (m != 'a' && m != 'e' && m != 'i'
                    && m != 'o' && m != 'u' && m != 'A'
                    && m != 'E' && m != 'I' && m != 'O'
                    && m != 'U')
            {
                c = string1[i];
                /*
                    if a consonant is found, the loop will stop working and
                    the found consonant will be returned.
                */
                break;
            }
        }
    }
    return c;
    //otherwise, 0 will be returned.
}
