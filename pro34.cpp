#include<iostream>
#include <string>
using namespace std;

string ReadString()
{
	string str;
	cout<<"\nPlease Enter a String : ";
	getline(cin, str);
	return str;
}

bool IsVowel(char c)
{
	c = tolower(c);
	return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');
}

void PrintVowels(string str)
{
	cout<<"\nVowels in string are : ";
	for(short i = 0; i < str.length(); i++)
	{
		if(IsVowel(str[i]))
			cout<<str[i]<<"   ";
	}
}

int main()
{
	string str = ReadString();
	PrintVowels(str);
}
