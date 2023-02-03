#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);

	for (int i = 0; name[i] != '\0'; i++)
	{
		cout << name[i] << " At " << i << endl;
	}

	return 0;
}