/*
    CH08-320142
    a1 p4.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
using namespace std;
void mycount(int x, int y);
void mycount(char a, string arr);
int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    //integer input
    cin.get();
    char a;
    cin >> a;
    cin.get();
    //character input
    string arr;
    getline(cin, arr);
    //string input
    mycount (x, y);
    mycount(a, arr);
}
void mycount(int x, int y)
{
    cout << y-x << endl;
    return;
}
void mycount(char a, string arr)
{
    int counter = 0;
    for (int i = 0; i < (int) arr.length(); i++)
    //loop will continue until to the length of the array.
    {
        if (a == arr[i])
        {
            counter++;
        }
    }
    cout << counter << endl;
}
/*
    The difference between the second and the first integer
    will be printed according to the first mycount function,
    and the number of the character input found in the input string
    will be printed according to the second mycount function.
*/
