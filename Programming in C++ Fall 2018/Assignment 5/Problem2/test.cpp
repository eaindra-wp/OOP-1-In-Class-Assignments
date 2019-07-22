#include <iostream>
#include <cstring>

 using namespace std;

class kinda
{
int a;
char name[10];

    public:
    kinda()
    {
        cout<<"in default constr"<<endl;
        a=0;
        name[0]='\0';
    }

    ~kinda()
    {
        cout<<"in default destr"<<endl;
    }

    kinda(int val,char* naam)
    {
        cout<<"in param constr"<<endl;
        a=val;
        strcpy(name,naam);
    }

    kinda(kinda &obj)
    {
        cout<<"in copy constr"<<endl;
        a=obj.a;
        strcpy(name,obj.name);
    }

    void display()
    {
        cout<<"obj details"<<endl;
        cout<<"a="<<a<<endl;
        cout<<"name="<<name<<endl;
    }
};


int main()
{
    char a[]="prashu";

    std::string s = "Hello";
    cout << s << endl;
    kinda ob(7,a);
    ob.display();
    ob.display();
    kinda ob1 = ob;
    ob1.display();
    ob1.display();

    return 0;
}
