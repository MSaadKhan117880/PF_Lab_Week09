#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "How many numbers do you want to enter? ";
	cin >> n;

	int number;
	int product = 1;
	int num[n];


	for (int i = 0; i < n; i++)
	{
		cout << "Enter a number: ";
		cin >> num[i];
	}

	cout << "Enter a number you want to multiply: ";
	cin >> number;
	for (int i = 0; i < n; i++)
	{
		product = number * num[i];
		cout << product << ", ";
	}


	return 0;
}