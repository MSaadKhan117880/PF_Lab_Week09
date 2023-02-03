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

	if (count % 2 == 0)
	{
		even = true;
	}
	if(count % 3 == 0)
	{
		odd = true;
	}

	if (odd == true)
	{
		cout << "The length is odd\n";
	}
	if (even == true)
	{
		cout << "The lenght is even\n";
	}

	return 0;
}