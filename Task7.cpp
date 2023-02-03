#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "How many numbers do you want to enter? ";
	cin >> n;

	int number;
	int smallest;
	int num[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Enter a number: ";
		cin >> num[i];
	}
	smallest = num[0];
	for (int i = 1; i < n; i++)
	{
		if (smallest > num[i])
		{
			smallest = num[i];
		}
	}

	cout << "Smallest Number = " << smallest << endl;

	return 0;
}