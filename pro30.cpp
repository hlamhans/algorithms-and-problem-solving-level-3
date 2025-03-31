#include<iostream>
#include <string>
using namespace std;
string ReadString()
{
	string str;
	cout<<"\nEnter your string :";
	getline(cin,str);
	return str;
}

char ReadChar()
{
	char Char;
	cout<<"\nPlease Enter a character :";
	cin>>Char;
	return Char;
}

short Search(string str, char c)
{
	short count = 0;
	for(short i = 0; i < str.length(); i++)
	{
		if(str[i] == c)
			count++;
	}
	return count;
}

int main()
{
	string str = ReadString();
	char Char = ReadChar();
	cout<<"\nLetter '"<<Char<<"' count = "<<Search(str, Char)<<endl;
}
