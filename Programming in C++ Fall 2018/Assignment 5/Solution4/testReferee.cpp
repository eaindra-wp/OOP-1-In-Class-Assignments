/*
    CH08-320142
    a5_p4_testReferee.cpp
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
    a.printplayer();
    cout << "\n";

    //properties of the second player
    Player b(fname_second,lname_second,dob_second,2015,
             45000,9,"Middle","Right");
    b.printplayer();

    cout << "\n";

    //properties of the third player
    Player c(fname_third,lname_third,dob_third,2009,
             60000,10,"Right-wing","Left");
    c.increaseGoal();//increment the goal
    c.printplayer();
    cout << "\n";

    //information of the referee
    char r_fname[] = "Joseph\0";
    char r_lname[] = "Leppings\0";
    char r_dob[] = "1985-11-10\0";
    Referee z(r_fname,r_lname,r_dob,2007,80000);
    cout << "\n";
    //add player b and c to the yellow card list
    cout<< "Adding b to yellow list.. "<<z.addToYellowCardList(&b)<<endl;
    cout<<"Adding c to yellow list.. " <<z.addToYellowCardList(&c)<< endl;
    //add player a to the red card list
    cout<<"Adding a to red list.. " <<z.addToRedCardList(&a)<<endl;
    //add player b to the yellow card again
    cout<<"Adding b to yellow list.. " <<z.addToYellowCardList(&b)<<endl;
    //trying to add player a to the red card list again
    cout<<"Adding a to red list.. " <<z.addToRedCardList(&a)<<endl;
    return 0;
}
