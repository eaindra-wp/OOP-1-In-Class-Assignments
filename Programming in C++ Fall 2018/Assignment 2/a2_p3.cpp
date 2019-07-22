/*
    CH08-320142
    a2_p3.cpp
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#include <iostream>
using namespace std;
void subtract_max(int* arr, int n)
{
    int maxi = arr[0];
    for (int i = 1; i < n ; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
            //looking for the maximum number in the array
        }
    }
    for (int j = 0; j < n ; j++)
    {
        arr[j] = arr[j] - maxi;
        //subtracting the max value from all elements of the array
    }
    return;
}
void deallocate(int* arr)
{
    delete []arr;
    //deallocate the array after the program has been finished
}
int main()
{
    int n;
    cin >> n;
    //asking for the size of the array
    int i = 0;
    int j = 0;
    int* arr;
    arr= new int[n];
    //dynamically allocate the array with n integers
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    //add integers to the array

    subtract_max(arr,n);
    //calling the subtract function in the main function
    while (j < n)
    {
        cout << arr[j] << endl;
        //printing the result in the main function
        j++;
    }
    deallocate(arr);
    //calling the deallocation in the main function
    return 0;
}

