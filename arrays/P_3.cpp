/*
Q : Write a program to read two arrays each of size 5 and store sum of these in two arrays in a third array..
*/
#include <iostream>
using namespace std;
int main()
{
    int i;
    int arr1[5], arr2[5], arr3[5];
    //Taking ist array as an input 
    cout << "Enter first array elements :";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }
    //Taking 2nd arrat as an input
    cout << "Enter second array elements :";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr2[i];
    }
    //printing the sum of two arrays 
    for (int i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i] + arr2[i];

        cout << "sum at index " << i << " is: "
             << arr3[i] << endl;
    }
    return 0;
}