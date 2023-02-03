#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "How many numbers do you want to enter? ";
	cin >> n;

	int num[n];
	float avg;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter a number: ";
		cin >> num[i];
		sum = sum + num[i];
	}
	avg = sum / n;


	cout << "The Sum = " << sum << endl;
	cout << "The average = " << avg << endl;


	return 0;
}