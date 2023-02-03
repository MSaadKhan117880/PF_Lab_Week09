#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);

	int count = 0;
	bool even = false;
	bool odd = false;

	for (int i = 0; name[i] != '\0'; i++)
	{
		count++;
	}

	for (int i = count; i >= 0; i--)
	{
		cout << name[i];
	}
	cout << endl;

	return 0;
}