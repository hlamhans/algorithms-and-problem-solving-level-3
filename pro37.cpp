#include<iostream>
#include <string>
#include<vector>
using namespace std;
string ReadString()
{
	string str;
	cout<<"\nPlease Enter a string : ";
	getline (cin, str);
	return str;
}

vector<string> SplitString(string str, string delim)
{
	vector <string> vStr;
	short pos = 0;
	string sWord;
	while((pos = str.find(delim)) != std::string::npos)
	{
		sWord = str.substr(0, pos);
		if(sWord != "")
			vStr.push_back(sWord);
		str.erase(0, pos + delim.length());
	}
	if (str != "")
		vStr.push_back(str);
	return vStr;
}
int main()
{
	vector<string> vStr;
	vStr = SplitString(ReadString(), " ");
	cout<<"\nToken = "<<vStr.size()<<endl;
	for(string &str : vStr)
		cout<<str<<endl;
}
