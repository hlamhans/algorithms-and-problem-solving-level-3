#include <string>
#include <iostream>
using namespace std;

string ReadString()
{
	string str;
	getline(cin, str);
	return str;
}

string LowerFirst(string str)
{
	bool isFirstLetter = true;
	int i = 0;
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] != ' ' && isFirstLetter)
			str[i] = tolower(str[i]);
		isFirstLetter = (str[i] == ' ' ? true : false);
	}
	return str;
}

int main()
{
	string s1 = ReadString();
	cout<<"\nString after conversion:\n";
	s1 = LowerFirst(s1);
	cout<<s1<<endl;

}
