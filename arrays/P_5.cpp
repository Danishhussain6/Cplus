/*
Q : Write a program to check two matrices are equal or not.

*/
#include <iostream>
using namespace std;

int main()
{
    int i, j, rows, columns, isEqual;

    int a[i][j], b[i][j];

    cout << " Enter the rows and Columns a Equal Matrix :";
    cin >> i >> j;

    cout << " Enter the First Matrix Items :  ";
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < i; columns++)
        {
            cin >> a[rows][columns];
        }
    }
    cout << "Enter the Second Matrix Items :  ";
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < i; columns++)
        {
            cin >> b[rows][columns];
        }
    }

    isEqual = 1;
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            if (a[rows][columns] != b[rows][columns])
            {
                isEqual = 0;
                break;
            }
        }
    }
    if (isEqual == 1)
    {
        cout << "Matrix a is Equal to Matrix b";
    }
    else
    {
        cout << "Matrix a is Not Equal to Matrix b";
    }

    return 0;
}