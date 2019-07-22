/*
    CH08-320142
    a5_p4_TournamentMember.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#ifndef TOURNAMENTMEMBER_H_INCLUDED
#define TOURNAMENTMEMBER_H_INCLUDED
#include <iostream>
#include <cstring>
class TournamentMember
{
    private:
        //properties
        char firstname[36];
        char lastname[36];
        char dob[11];
        static std::string location;
        int membersince;
        double salary;

    public:
        //constructors
        TournamentMember();
        TournamentMember(char fname[], char lname[], char dobb[], int since, double sala);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();

        //inline setters
        void setFirstname(char *newfirstname)
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
        static std::string getLocation()
        {
            return location;
        }
        void printinfo();//print method
        static void ChangeLocation(std::string loc)
        //method to change the location,can also be used as a setter
        {
            location = loc;
        }
};
class Player: public TournamentMember
{
    private://properties
        int number;
        std::string position;
        int goals;
        std::string footed;
    public:
        //constructors and destructor
        Player(char fname[], char lname[], char dobb[], int since,
            double sala, int nnum, std::string po,
            std::string fo);
        Player(const Player&);
        ~Player();

        //print the information of player
        void printplayer();
        //increment the number of goals
        void increaseGoal();
        //setter methods
        void setNumber(int newno)
        {
            number = newno;
        }
        void setPosition(std::string newpo)
        {
            position = newpo;
        }
        void setFooted(std::string newfooted)
        {
            footed = newfooted;
        }
        int getNumber() const
        {
            return number;
        }
        int getGoals() const
        {
            return goals;
        }
        std::string getPosition() const
        {
            return position;
        }
        std::string getFooted() const
        {
            return footed;
        }
};

class Referee: public TournamentMember
{
    private://properties
        int yellowCardCount;
        Player *yellowCardList[40];
        int redCardCount;
        Player *redCardList[40];
    public:
        //constructors and destructor
        Referee(char fname[],char lname[],char dob[],int since,double sala);
        Referee(const Referee&);
        ~Referee();
        //methods
        bool addToRedCardList(Player *p);
        bool addToYellowCardList(Player *p);
        /*void setYellowCardList(int y)
        {
            yellowCardCount = y;
        }
        void setRedCardList(int r)
        {
            redCardCount = r;
        }*/
        int getYellowCardList()
        {
            return yellowCardCount;
        }
        int getRedCardList()
        {
            return redCardCount;
        }
};

#endif
