#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character :";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "upper case " << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "lower case" << endl;
    }
    else
    {
        cout << "Not english letter" << endl;
    }
    return 0;
}