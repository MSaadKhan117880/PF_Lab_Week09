#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "How many numbers do you want to enter? ";
	cin >> n;

	int num[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Enter a number: ";
		cin >> num[i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cout << num[i] << ", ";
	}

	return 0;
}