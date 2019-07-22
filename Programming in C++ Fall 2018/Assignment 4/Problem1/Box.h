/*
    CH08-320142
    a4_p1_Box.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
class Box
{
private:
    double height, depth, width;
    //properties for the program

public:
    //setter function declarations
    void setHeight(double newheight);
    void setDepth(double newdepth);
    void setWidth(double newwidth);
    //print function
    void print();

    //getter functions
    double getHeight();
    double getDepth();
    double getWidth();

    //empty constructor
    Box();
    //constructor with variables
    Box(double h, double w, double d);
    //copy constructor
    Box(const Box&);
    //destructor
    ~Box();
};
