/*
    CH08-320142
    a5_p3_TournamentMember.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include "TournamentMember.h"
#include <iostream>
#include <cstring>
using namespace std;

string TournamentMember::location="Bremen\0";


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
void TournamentMember::printinfo()
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
    cout << "Parametric constructor of player" << endl;
    number = nnum;
    position = po;
    goals = 0;
    footed = fo;
}
//copy constructor
Player::Player(const Player& cp):TournamentMember(cp)
{
    cout << "Copy constructor of player" << endl;
    number = cp.number;
    position = cp.position;
    goals = cp.goals;
    footed = cp.footed;
}
//destructor
Player::~Player()
{
    cout << "Destructor of player" << endl;
}
//print method for the information of a player
void Player::printplayer()
{
    cout << "First name: " << this->getFirstname()<< endl;
    cout << "Last name: " << this->getLastname() << endl;
    cout << "Date of Birth: " << this->getDOB() << endl;
    cout << "Location: " << this->getLocation() << endl;
    cout << "Member since " << this->getMembersince() << endl;
    cout << "Salary: " << this->getSalary() << endl;
    cout << "Number: " << number << endl;
    cout << "Position: " << position << endl;
    cout << "Number of goals: " << goals << endl;
    cout << "Left or right footed? " << footed << endl;
}
//increase the number of goals
void Player::increaseGoal()
{
    goals++;
}
