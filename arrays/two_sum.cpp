/*
Q : Given an array of integers nums and an integer target, return indicies of two numbers such that they add up to the target..

*/
#include<iostream>
using namespace std;
int main(){
int nums[4]={2,7,11,15};
int target =9;
for (int i=0 ; i <4; i++){
    for (int j=i+1;j<4;j++){
    if (target == (nums[i]+nums[j]))
    {
        cout << i<< " "<< j <<endl;
    }
}
}
return 0;
}
