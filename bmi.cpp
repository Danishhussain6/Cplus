/*Q):
Write a program that calcultes user's body mass index(bmi) and categorizes it as underweight,normal, overweight, or obese based on following table:

BMI                                Weight Status
Below 18.5:                        Underweight
18.5-24.9:                         Normal
25-29.9:                           Overweight
30.0 and above:                    Obese

To calculate BMI based on weight in pounds(wt_lbs) and height in inches(ht_in) , use this formula:
bmi=703*wt_lbs/ht_in
*/

#include <iostream>
using namespace std;
int main()
{
    float wt_lbs, ht_in, bmi;
    cout << "Enter your weight in pounds : ";
    cin >> wt_lbs;
    cout << "Enter your height in inches : ";
    cin >> ht_in;
    bmi = 703 * wt_lbs / ht_in;
    if (bmi < 18.5)
    {
        cout << "Under weight" << endl;
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        cout << "Normal" << endl;
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        cout << "Overweight" << endl;
    }
    else if (bmi >= 30)
    {
        cout << "Obese" << endl;
    }
    return 0;
}