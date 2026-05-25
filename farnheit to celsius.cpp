#include<iostream>
using namespace std;
int main (){
    //For temperature in Farenheit
    float ftemp;
    cout<<"Enter temperature in farenheit :";
    cin>>ftemp;
    // Temperature in celsius
    float ctemp = (ftemp -32)*5/9;
    cout<<"Temperature in celsius is : "<<ctemp<<endl;
    return 0;
}
