#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "How many numbers do you want to enter? ";
	cin >> n;

	int num[n];


	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter a number: ";
		cin >> num[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << num[i] << ", ";
	}

	return 0;
}