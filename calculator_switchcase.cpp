#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    char ch;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter user choice to perform operation:";
    cin >> ch;
    cout << "Enter second number:";
    cin >> b;
    switch (ch)
    {
    case '+':
        c = a + b;
        cout << "Addition is :" << c << endl;
        break;
    case '-':
        c = a - b;
        cout << "Subtraction is :" << c << endl;
        break;
    case '*':
        c = a * b;
        cout << "Multiplication is :" << c << endl;
        break;
    case '/':
        c = a / b;
        cout << "Division is :" << c << endl;
        break;

    default:
        cout << "Not a valid choice" << endl;
        break;
    }
    return 0;
}