#include<iostream>
#include<string>
using namespace std;

int main()
{
	string word = "something ";
	string input;

	cout << "Enter a sentence: ";
	getline(cin,input);

	int length = input.size();

	for (int i = 0; i < 10; i++)
	{
		cout << word[i];
	}
	for (int i = 0; i < length; i++)
	{
		cout << input[i];
	}
	cout << endl;

	return 0;
}