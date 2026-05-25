
/*
Q : write a program Program to Perform Arithmetic Operations on Arrays

*/


#include<iostream>
using namespace std;

int main()
{
	int size, i, arr1[10], arr2[10];
	int add[10], sub[10], mul[10], mod[10];
	float div[10];
	
	cout << " Enter the Array Size  : ";
	cin >> size;
	
	cout << " Enter the First Array Items : ";
	for(i = 0; i < size; i++)
	{
		cin >> arr1[i];
	}	
	cout << " Enter the Second Array Items : ";
	for(i = 0; i < size; i++)
	{
		cin >> arr2[i];
	}
	for(i = 0; i < size; i++)
	{
		add[i] = arr1[i] + arr2[i]; 
		sub[i] = arr1[i] - arr2[i];
		mul[i] = arr1[i] * arr2[i];
		mod[i] = arr1[i] / arr2[i];
		div[i] = arr1[i] % arr2[i];
	}
	cout << "\nAdd\t Sub\t Mul\t Div\tMod = \n";
	for(i = 0; i < size; i++)
	{
		cout<<"Add = " << add[i] << endl;
		cout << "Sub = " << sub[i] << endl;
		cout << "Mul = " << mul[i] << endl;
		cout << "Mod = " << mod[i] << endl;
		cout << "Div = " << div[i] << endl;
	}

 	return 0;
}
