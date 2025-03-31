 #include<iostream>
#include<string>
using namespace std;

string ReadString()
{
	string str;
	cout<<"\nEnter a string :";
	getline(cin, str);
	return str;
}

short CountWord(string str)
{
	string delim = " ";// delimiter
	short pos = 0;
	short count = 0;
	string sWord;// define a string variable
	while((pos = str.find(delim)) != std::string::npos)
	{
		sWord = str.substr(0, pos);//store the word
		if(sWord != "")
			count++;
		//erase() until positon and move to next word
		str.erase(0, pos + delim.length());
	}
	if(str != "")
		count++;// it counts the last word of the string
	return count;
}
int main()
{
	string str = ReadString();
	cout<<"\nThe number of words in your string is : ";
	cout<<CountWord(str);
}
