#include <iostream>
#include <string>
using namespace std;

string UpperFirstLetterOfEachWord(string s1)
{
	bool	isFirstLetter = true;

	for (short i = 0; i < s1.length(); i++)
	{
		if (s1[i] != ' ' && isFirstLetter)
			s1[i] = toupper(s1[i]);
		isFirstLetter = (s1[i] == ' ' ? true : false);
	}
	return s1;
}

int main()
{
	string S1 = "houdhoud is good father to me ";
	cout << "\nString after conversion:\n";
	S1 = UpperFirstLetterOfEachWord(S1);
	cout << S1 << endl;
}

