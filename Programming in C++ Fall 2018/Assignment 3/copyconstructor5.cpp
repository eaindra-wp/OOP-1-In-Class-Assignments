/*
    CH08-320142
    a3_p5.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);//constructor with parameter
	NaiveString(const NaiveString&);//copy constructor
	~NaiveString();//destructor
	void update(char, char);//working with copy constructor
	void print();
};

NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
	cout << "constructor with parameter being called" << endl;
}
/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
*/
NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	cout << "copy constructor being called" << endl;
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

NaiveString::~NaiveString() {
    cout<<"Destroying "<<str<<endl;
    delete []str;
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}
//pass by value function
void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}
//reference function
void funcByRef(NaiveString *s)
{
    cout << "funcByRef() being called" << endl;
    s->update('B', 'C');
    s->print();
}

int main(int argc, char** argv)
{
    //first object using constructor with parameter
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	cout<<"After calls"<<endl;
    a.print();
	cout << "About to call funcbyref()" << endl;
	funcByRef(&a);
	cout<<"After calls"<<endl;
	a.print();
	cout << "\n";

    NaiveString b("LeBBacb");
    //object with parameter constructor
    NaiveString k(b);
    //object with copy constructor
	k.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(k);
	cout<<"After calls"<<endl;
    k.print();
	cout << "About to call funcbyref()" << endl;
	funcByRef(&k);
	cout<<"After calls"<<endl;
	k.print();
}
