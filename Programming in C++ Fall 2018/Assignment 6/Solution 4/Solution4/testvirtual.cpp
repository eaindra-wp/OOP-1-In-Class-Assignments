/*
    CH08-320142
    a6_p4_testvirtual.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

int main()
{
    Area *list[25];//an array with 25 objects
    int index = 0;
    int del_arr = 0;
    int counter = 0;
    char cpy_color[10];
    srand(static_cast<unsigned int>(time(0)));
    int obj, color;
    double siz,siz1;
    //2D char array for colors
    char colours[4][10] = {"RED","BLACK","VIOLET","BLUE"};
    while (index < 25)
    {
        //produce the size between 5 and 100
        siz = (rand()%96) + 5;
        siz1 = (rand()%96) + 5;
        obj = rand()%4;//to create 4 objects randomly
        color = rand()%4;//to select color randomly
        strcpy(cpy_color,colours[color]);
        if (obj == 0)
            list[index] = new Circle(cpy_color,siz);
        else if (obj == 1)
        {
            if (siz1 < siz)
                list[index] = new Ring(colours[color],siz,siz1);
            else
                list[index] = new Ring(colours[color],siz1,siz);
        }
        else if (obj == 2)
            list[index] = new Rectangle(colours[color],siz1,siz);
        else
            list[index] = new Square(colours[color],siz);
        index++;
    }
    //printing the result on the screen
    while (counter < 25)
    {
        cout <<"\n"<< counter << ":";
        list[counter]->getColor();//print the random color
        cout<<"\n";
        //print the area and perimeter of the random object
        cout<< list[counter]->calcPerimeter()<<endl;
        cout<< list[counter]->calcArea()<<endl;
        counter++;
    }
    //releasing the objects created
    while (del_arr < 25)
    {
        delete list[del_arr];
        del_arr++;
    }
    return 0;
}
/*
    ______       ________      ______      ___________       ________
    |Ring|  <--  |Circle|  <-- |Area|  --> |Rectangle|  -->  |Square|
    |____|       |______|      |____|      |_________|       |______|

*/
