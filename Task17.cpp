#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input;

	cout << "Enter any sentence: ";
	getline(cin, input);

	int length = input.size();

	for (int i = 0; i < length; i++)
	{
		if (input[i] == 'e' || input[i] == 'E' || input[i] == 'a' || input[i] == 'A' || input[i] == 'i' || input[i] == 'I' || input[i] == 'o' || input[i] == 'O' || input[i] == 'u' || input[i] == 'U')
		{
			continue;
		}
		else
		{
			cout << input[i];
		}
	}
	cout << endl;

	return 0;
}