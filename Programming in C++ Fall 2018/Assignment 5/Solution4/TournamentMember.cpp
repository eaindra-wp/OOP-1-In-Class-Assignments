/*
    CH08-320142
    a5_p4_TournamentMember.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include "TournamentMember.h"
#include <iostream>
#include <cstring>
using namespace std;

string TournamentMember::location="Bremen\0";

//Empty constructor
TournamentMember::TournamentMember()
{
    //new char arrays to set default values
    char fn[] = "Empty\0";
    char ln[] = "Constructor\0";
    char db[] = "1970-01-01\0";
    setFirstname(fn);
    setLastname(ln);
    setDOB(db);
    setMembersince(2000);
    setSalary(0);
    cout << "Empty constructor called" << endl;
}
//parametric constructor
TournamentMember::TournamentMember
(char fname[], char lname[], char dobb[], int since, double sala)
{
    strcpy(firstname, fname);
    firstname[strlen(firstname)] = '\0';
    strcpy(lastname, lname);
    lastname[strlen(lastname)] = '\0';
    strcpy(dob, dobb);
    dob[strlen(dob)] = '\0';
    membersince = since;
    salary = sala;
    cout << "Parametric constructor called" << endl;
}
//copy constructor
TournamentMember::TournamentMember(const TournamentMember &cpy)
{
    strcpy(firstname,cpy.firstname);
    firstname[strlen(firstname)] = '\0';
    strcpy(lastname,cpy.lastname);
    lastname[strlen(lastname)] = '\0';
    strcpy(dob, cpy.dob);
    dob[strlen(dob)] = '\0';
    membersince = cpy.membersince;
    salary = cpy.salary;
    cout << "Copy constructor called" << endl;
}
//destructor
TournamentMember::~TournamentMember()
{
    cout << "Destructor called" << endl;
}
//print function
void TournamentMember::printinfo ()
{
    cout << "First name: " << this->firstname << endl;
    cout << "Last name: " << this->lastname << endl;
    cout << "Date of Birth: " << this->dob << endl;
    cout << "Location: " << getLocation() << endl;
    cout << "Member since " << this->membersince << endl;
    cout << "Salary: " << this->salary << endl;
    cout << "\n";
}
//parametric constructor
Player::Player
(char fname[], char lname[], char dobb[], int since,
 double sala, int nnum, string po, string fo):
    TournamentMember(fname,lname,dobb,since,sala)
{
    cout << "Parametric constructor for players" << endl;
    number = nnum;
    position = po;
    goals = 0;
    footed = fo;
}
//copy constructor
Player::Player(const Player& cp):TournamentMember(cp)
{
    cout << "Copy constructor for player" << endl;
    number = cp.number;
    position = cp.position;
    goals = cp.goals;
    footed = cp.footed;
}
//destructor
Player::~Player()
{
    cout << "Destructor for player" << endl;
}
void Player::printplayer()
{
    cout << "First name: " << getFirstname() << endl;
    cout << "Last name: " << getLastname() << endl;
    cout << "Date of Birth: " << getDOB() << endl;
    cout << "Location: " << getLocation() << endl;
    cout << "Member since " << getMembersince() << endl;
    cout << "Salary: " << getSalary() << endl;
    cout << "Number: " << number << endl;
    cout << "Position: " << position << endl;
    cout << "Number of goals: " << goals << endl;
    cout << "Left or right footed? " << footed << endl;
}
void Player::increaseGoal()
{
    goals++;
}

Referee::Referee(char fname[], char lname[], char dob[], int since,
                 double sala):
    TournamentMember(fname,lname,dob,since,sala)
{
    cout << "Parametric constructor for referee" << endl;
    yellowCardCount = 0;
    redCardCount = 0;
}
Referee::Referee(const Referee& cp)
{
    cout << "copy constructor for referee" << endl;
    yellowCardCount = cp.yellowCardCount;
    redCardCount = cp.redCardCount;
}
Referee::~Referee()
{
    cout << "destructor for referee" << endl;
}
//add a player to the yellow card list
bool Referee::addToYellowCardList(Player* p)
{
    //check whether the player has a yellow card
    for (int i=0; i<yellowCardCount; i++)
    {
        if (yellowCardList[i] == p)
        {
            /*if the player is already in the list,
            he will be removed and all indexes for player
            objects will move by one place.*/
            for (int j= i+1; j<yellowCardCount; j++)
            {
                yellowCardList[j-1]=yellowCardList[j];
            }
            yellowCardCount--;
            addToRedCardList(p);
            return false;
        }
    }
    yellowCardList[yellowCardCount]=p;
    yellowCardCount++;
    return true;
}
//add a player is in the red card list
bool Referee::addToRedCardList(Player* p)
{
    for (int k=0; k<redCardCount; k++)
    {
        if (redCardList[k] == p)
        {
            /*if the player is already in the list,
            nothing should happen.*/
            for (int l= k+1; l<redCardCount; l++)
            {
                redCardList[l-1]=redCardList[l];
            }
            return false;
        }
    }
    redCardList[redCardCount]=p;
    redCardCount++;
    return true;
}
