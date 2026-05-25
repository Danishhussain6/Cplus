/*Q:
Keep taking the numbers as input until user enters odd no.:*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Enter number :";
        cin >> n;
        cout << n << endl;
        if (n % 2 != 0)
        {

            break;
        }
    } while (1);

    cout << "Thank you :" << endl;
    return 0;
}
