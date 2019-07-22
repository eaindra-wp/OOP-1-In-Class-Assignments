#ifndef TOURNAMENTMEMBER_H_INCLUDED
#define TOURNAMENTMEMBER_H_INCLUDED
#include <cstring>
#include <iostream>
class TournamentMember
{
    protected:
        //properties
        char firstname[36];
        char lastname[36];
        char dob[11];
        static char location[30];
        int membersince;
        double salary;

    public:
        //constructors
        TournamentMember();
        TournamentMember(char *, char *, char *, int, double);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();

        //inline setters
        void setFirstname(char newfirstname[])
        {
            strcpy(firstname,newfirstname);
            firstname[strlen(firstname)] = '\0';
        }
        void setLastname(char newlastname[])
        {
            strcpy(lastname,newlastname);
            lastname[strlen(lastname)] = '\0';
        }
        void setDOB(char newdob[])
        {
            strcpy(dob,newdob);
            dob[strlen(dob)] = '\0';
        }
        void setMembersince(int newmembersince)
        {
            membersince = newmembersince;
        }
        void setSalary(double newsalary)
        {
            salary = newsalary;
        }
        //inline getters
        char *getFirstname()
        {
            return firstname;
        }
        char *getLastname()
        {
            return lastname;
        }
        char *getDOB()
        {
            return dob;
        }
        int getMembersince()
        {
            return membersince;
        }
        double getSalary()
        {
            return salary;
        }
        std::string getLocation()
        {
            return location;
        }

        void printinfo();//print method
        void changeLocation(char*);
};

#endif
