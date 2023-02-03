#include<iostream>
using namespace std;

int main()
{
	int sizeOfarr2;

	cout << "Enter the size of second array: ";
	cin >> sizeOfarr2;

	float arr1[2];
	float arr2[sizeOfarr2];


	for (int i = 0; i < 2; i++)
	{
		cout << "Enter values of First Array: ";
		cin >> arr1[i];
	}
	for (int i = 1; i < sizeOfarr2 + 1; i++)
	{
		cout << "Enter values of Second Array: ";
		cin >> arr2[i];
	}

	int length = (sizeof(arr2) / sizeof(arr2[0])) + 2;
	float arr3[length];

	for (int i = 0; i < length; i++)
	{
		if (i == 0)
		{
			arr3[i] = arr1[i];
		}
		else
		{
			arr3[i] = arr2[i];
		}
		if (i == length - 1)
		{
			arr3[i] = arr1[1];
		}
	}

	for (int i = 0; i < length; i++)
	{
		cout << arr3[i] << ", ";
	}

	cout << endl;

	return 0;
}