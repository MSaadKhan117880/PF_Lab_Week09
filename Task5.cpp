#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "How many numbers do you want to enter? ";
	cin >> n;

	int numToFind;
	bool found = false;
	int num[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Enter a number: ";
		cin >> num[i];
	}

	cout << "Enter a number you want to find: ";
	cin >> numToFind;

	for (int i = 0; i < n; i++)
	{
		if (num[i] == numToFind)
		{
			found = true;
			break;
		}
	}
	if (found == true)
	{
		cout << "The number exists" << endl;
	}
	else
	{
		cout << "The number does not exist" << endl;
	}


	return 0;
}