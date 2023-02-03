#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);

	int count = 0;
	char letter;
	cout << "Enter a letter you want to compare: ";
	cin >> letter;

	bool letterFound = false;

	for (int i = 0; name[i] != '\0'; i++)
	{
		count++;
	}

	if (name[count-1] == letter)
	{
		letterFound = true;
	}

	if (letterFound == true)
	{
		cout << "They are same" << endl;
	}
	else
	{
		cout << "They are not same" << endl;
	}
		
	cout << endl;

	return 0;
}