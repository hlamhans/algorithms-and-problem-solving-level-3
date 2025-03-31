#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string str;
	cout<<"\nEnter your string :";
	getline(cin, str);
	return str;
}

char InverLetterCase(char Char)
{
	return isupper(Char) ? tolower(Char) : toupper (Char);
}

string InverAllLetterStringCase(string str)
{
	for(short i = 0; i < str.length(); i++)
	{
		str[i] = InverLetterCase(str[i]);
	}
	return str;
}

int main()
{
	string str = ReadString();
	cout<<"\nString after Inver All Letter Case: \n";
	str = InverAllLetterStringCase(str);
	cout<<str<<endl;
	return 0;

}
