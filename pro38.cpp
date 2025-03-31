#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string str;
	cout<<"\nEnter a string : ";
	getline(cin ,str);
	return str;
}

string TrimLeft(string str)
{
	for(short i = 0; i < str.length(); i++)
	{
		if(str[i] != ' ')
			return str.substr(i, str.length() - i);
	}
	return "";
}

string TrimRight(string str)
{
	for(short i = str.length() ; i >= 0; i--)
	{
		if(str[i] != ' ' )
			return str.substr(0, i + 1);
	}
	return "";
}

string Trim(string S1)
{
	return (TrimLeft(TrimRight(S1)));
}
int main()
{
	string str = ReadString();
	cout<<"\nString = " <<str;
	cout<<"\n\nTrim Left = " <<TrimLeft(str);
	cout<<"\nTrim Right  = "<<TrimRight(str);
	cout<<"\nTrim        = "<<Trim(str);
}
