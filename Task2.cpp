#include<iostream>
using namespace std;

int main()
{

	int num[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a number: ";
		cin >> num[i];
		sum = sum + num[i];
	}

	cout << "The Sum = " << sum << endl;


	return 0;
}