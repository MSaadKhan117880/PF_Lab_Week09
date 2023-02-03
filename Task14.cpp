#include<iostream>
using namespace std;

int main()
{
	float RT = 0;
	int no_of_resistors;
	cout << "Enter no. of resistors: ";
	cin >> no_of_resistors;

	float resistance[no_of_resistors];

	for (int i = 0; i < no_of_resistors; i++)
	{
		cout << "Enter value of resistor " << i + 1 << " : ";
		cin >> resistance[i];
		RT = RT + resistance[i];
	}

	cout << "Total Resistance = " << RT << " Ohms " << endl;


	return 0;
}