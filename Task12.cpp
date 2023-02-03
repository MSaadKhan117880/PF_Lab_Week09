#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);

	int count = 0;

	bool letterFound = false;

	for (int i = 0; name[i] != '\0'; i++)
	{
		if (name[i] == 'e' || name[i] == 'E' || name[i] == 'a' || name[i] == 'A' || name[i] == 'i' || name[i] == 'I' || name[i] == 'o' || name[i] == 'O' || name[i] == 'u' || name[i] == 'U')
		{
			count++;
		}
	}

	cout << "Number of vowels = " << count << endl;

	cout << endl;

	return 0;
}