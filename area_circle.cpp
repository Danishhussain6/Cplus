#include <iostream>
using namespace std;
int main()
{
    const float pi = 3.14;
    float radius;
    cout << "Enter radius of circle :";
    cin >> radius;
    cout << "Area of circle is :" << pi * radius * radius << endl;
    return 0;
}