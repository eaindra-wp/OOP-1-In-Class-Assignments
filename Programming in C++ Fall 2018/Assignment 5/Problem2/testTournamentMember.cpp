#include "TournamentMember.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char first[36];
    char last[36];
    char birth[11];
    int memberlength;
    double salary;
    cout << "Type first name: ";
    cin >> first;
    first[strlen(first)] = '\0';
    cout << "Type last name: ";
    cin >> last;
    cout << "Type date of birth: ";
    cin >> birth;
    cout << "From when did the member join?  ";
    cin >> memberlength;
    cout << "Type the salary: ";
    cin >> salary;
    TournamentMember a(first,last,birth,memberlength,salary);
    a.printinfo();
    TournamentMember b(a);
    b.printinfo();
    TournamentMember
}
