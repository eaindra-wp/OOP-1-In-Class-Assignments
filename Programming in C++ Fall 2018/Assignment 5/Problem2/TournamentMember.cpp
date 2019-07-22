#include "TournamentMember.h"
#include <iostream>
#include <cstring>
using namespace std;
char TournamentMember::location[30]="Bremen\0";

TournamentMember::TournamentMember()
{
    cout << "Empty constructor called" << endl;
}
TournamentMember::TournamentMember(char *fname, char *lname, char *dobb, int since, double sala)
{
    strcpy(firstname, fname);
    strcpy(lastname, lname);
    strcpy(dob, dobb);
    membersince = since;
    salary = sala;
    cout << "Parametric constructor called" << endl;
}
TournamentMember::TournamentMember(const TournamentMember &cpy)
{
    strcpy(firstname,cpy.firstname);
    strcpy(lastname,cpy.lastname);
    strcpy(dob, cpy.dob);
    membersince = cpy.membersince;
    salary = cpy.salary;
    cout << "Copy constructor called" << endl;
}
TournamentMember::~TournamentMember()
{
    cout << "Destructor called" << endl;
}
void TournamentMember::printinfo()
{
    cout << "First name: " << this->getFirstname() << endl;
    cout << "Last name: " << this->lastname << endl;
    cout << "Date of Birth: " << this->dob << endl;
    cout << "Location: " << this->location << endl;
    cout << "Member since " << this->membersince << endl;
    cout << "Salary: " << this->salary << endl;
}
void TournamentMember::changeLocation(char* newLocate)
{
    strcpy(location, newLocate);
}

