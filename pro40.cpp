#include <iostream>
#include <string>
#include<vector>
using namespace std;

string JoinString(vector<string> vStr, string Delim)
{
	string str = "";
	for (string &s : vStr)
		str = str + s + Delim;
	return str.substr(0, str.length() - Delim.length());
}

string JoinString(string arr[], short len, string Delim)
{
	string str = "";
	for(short i = 0; i < len; i++)
		str = str + arr[i] + Delim;
	return str.substr(0, str.length() - Delim.length());
}
int main()
{
	vector<string> vStr = {"hamza", "10", "codeing"};
	string arrString[] = {"hamza", "10", "programming"};
	cout<<"\nVector after join: \n";
	cout<<JoinString(vStr, " ");
	cout<<"\n\nArray after join: \n";
	cout<<JoinString(arrString, 3, " ");
}

