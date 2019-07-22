/*
    CH08-320142
    a5_p3_testPlayer.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include "TournamentMember.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    TournamentMember::ChangeLocation("Hamburg\0");
    //changing the location of the whole group
    char fname[] = "Louis";
    char fname_first[] = "John\0";
    char lname_first[] = "Lara\0";
    char dob_first[] = "1998-10-09\0";
    char fname_second[] = "James\0";
    char lname_second[] = "Lu\0";
    char dob_second[] = "1995-11-02\0";
    char fname_third[] = "Peter\0";
    char lname_third[] = "Han\0";
    char dob_third[] = "1997-12-04\0";

    //properties of the first player
    Player a(fname_first,lname_first,dob_first,2010,
             50000,10,"Left-wing","Left");
    a.setFirstname(fname);
    a.printplayer();
    cout << "\n";

    //properties of the second player
    Player b(fname_second,lname_second,dob_second,2015,
             45000,9,"Middle","Right");
    b.setSalary(50000);
    b.printplayer();

    cout << "\n";

    //properties of the third player
    Player c(fname_third,lname_third,dob_third,2009,
             60000,10,"Right-wing","Left");
    c.increaseGoal();//increment the goal
    c.printplayer();
    cout << "\n";

    //test copy constructor
    Player e(c);
    e.printplayer();
    cout << "\n";
    return 0;
}
