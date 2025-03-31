#include <iostream>
#include<string>
using namespace std;

string ReadString()
{
	string str;
	cout<<"enter your string:";
	getline(cin,str);
	return str;
}
string Upper(string str)
{
	for(int i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}
	return str;
}

string Lower(string str)
{
	for(int i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
	return str;
}
int main()
{
	string str = ReadString();
	cout<<"\nstring after Uppre\n";
	str = Upper(str);
	cout<<str<<endl;
	cout<<"\nstring after Lower\n";
	str = Lower(str);
	cout<<str<<endl;
}
