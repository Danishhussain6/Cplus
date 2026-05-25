#include <iostream>
using namespace std;
int main()
{
    int a, b, res;
    char op;
    cout << "Enter first number :";
    cin >> a;
    cout << "Enter the operator(+,-,*,/,%): ";
    cin >> op;
    cout << "Enter second number:";
    cin >> b;
    if (op == '+')
    {
        res = a + b;
        cout << "Addition is:" << res << endl;
    }
    else if (op == '-')
    {
        res = a - b;
        cout << "Subtraction is: " << res << endl;
    }
    else if (op == '*')
    {
        res = a * b;
        cout << "Multiplication is: " << res << endl;
    }
    else if (op == '/')
    {
        res = a / b;
        cout << "Division is: " << res << endl;
    }
    else if (op == '%')
    {
        res = a % b;
        cout << "Remainder is: " << res << endl;
    }
    else
    {
        cout << "Not a valid choice" << endl;
    }
    return 0;
}