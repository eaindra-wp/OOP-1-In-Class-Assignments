/*
    CH08-320142
    a4_p1_testbox.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of boxes: ";
    cin >> n;

    //dynamically allocate the array
    Box *box;
    box = new Box[2*n];

    double h, d, w;
    for (int i = 0; i < n; i++)
    {
        //input height
        cout << "Type Height: ";
        cin >> h;
        box[i].setHeight(h);

        //input depth
        cout << "Type Depth: ";
        cin >> d;
        box[i].setDepth(d);

        //input width
        cout << "Type Width: ";
        cin >> w;
        box[i].setWidth(w);

        //copying the array values from 0 to n to the remaining ones
        box[n+i]=Box(box[i]);

        //print function
        box[i].print();
    }
    //deallocate the array
    delete []box;
    return 0;
}
