#include <iostream>
#include<string>
using namespace std;

string ReadString()
{
	string str;
	cout<<"\nPlease enter your string : ";
	getline(cin, str);
	return str;
}

char ReadChar()
{
	char c;
	cout<<"\nPlease enter a character : ";
	cin>>c;
	return c;
}

char InvertLetterCase(char c)
{
	return isupper(c) ? tolower(c) : toupper(c);
}
short	SearchAboutCharacter(string str, char c, bool MatchCase = true)
{
	short count = 0;
	for(short i = 0; i < str.length(); i++)
	{
		if(MatchCase)
		{
			if(str[i] == c)
				count++;
		}
		else
		{
			if(tolower(str[i]) == tolower(c))
				count++;
		}
	}
	return count;
}

int main()
{
	string str = ReadString();
	char c = ReadChar();
	cout<<"\nLetter \'"<<c<<"\' count = "<<SearchAboutCharacter(str, c);
	cout<<"\nLetter \'"<<c<<"\'";
	cout<<"Or \' "<<InvertLetterCase(c)<<"\' count = "<<SearchAboutCharacter(str, c, false);

}
