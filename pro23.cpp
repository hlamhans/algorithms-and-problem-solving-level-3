#include<iostream>
#include<string>
using namespace std;
void PrintFirstElement(string str){
	bool isFirstLetter = true;

	cout << "\nFirst letters of this string: \n";
	for(short i = 0; i < str.length(); i++)
	{
		if (str[i] != ' '  && isFirstLetter)
			cout<<str[i]<<endl;
		//short hand
		isFirstLetter =(str[i] == ' ' ? true : false);
	}
}
int main()
{
	string s1 = "haha is kaka @k ";
	PrintFirstElement(s1);
}
