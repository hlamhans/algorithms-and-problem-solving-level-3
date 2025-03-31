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

bool IsVowels(char c)
{
	c = tolower(c);
	return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');
}

short CountVowels(string str)
{
	short	count = 0;
	for(short i = 0; i < str.length(); i++)
	{
		if(IsVowels(str[i]))
			count++;
	}
	return count++;

}

int main()
{
	string str = ReadString();
	cout<< "\nNumber of vowels is : "<<CountVowels(str);
}
