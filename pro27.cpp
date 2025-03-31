#include <iostream>
#include <string>
using namespace std;

char	ReadChar()
{
	char Char;
	cout<<"Enter your charactar :";
	cin>>Char;
	return Char;
}

char InvertLetterCase(char Char)
{
	return isupper(Char) ? tolower(Char) : toupper(Char);
}
int main()
{
	char Char = ReadChar();
	cout <<"\nChar after inverting case: ";
	cout<<InvertLetterCase(Char)<<endl;
}
