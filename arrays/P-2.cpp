/*
Q : Declare an array of 15 integers and intialixe the array so that all array elements are zero.Then assign 10 to first element and 150 to last element.

*/
#include<iostream>
using namespace std;
int main(){
    int arr[15]={0};
    arr[0]=10;
    arr[14]=150;
    for(int i=0;i<15;i++){
        cout <<arr[i]<<endl;
    }
return 0;
}