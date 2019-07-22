/*
    CH08-320142
    a1 p2.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double v;
    cin >> v;
    string s;
    cin.get();
    getline(cin, s);
    for (int i = 0; i < n; i++)
    {
        cout << s << ":" << v << endl;
    }
    return 0;
}
/*
    The integer and double are typed into the program
    with cin. Then, cin.get() is used, so that the new line key
    after typing in the double can be ignored. Then, the string
    is added by using "getline(cin, s)" function.
    Then, the string and double are printed for n times, separated by n.
*/
