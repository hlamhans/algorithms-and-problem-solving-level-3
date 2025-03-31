#include<iostream>
#include <string>
using namespace std;

char ReadChar()
{
	char c;
	cout<<"\nPlease Enter a Character : ";
	cin>>c;
	return c;
}

bool IsVowels(char c)
{
	c = tolower(c);
	return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');
}
int main()
{
	char c = ReadChar();
	if(IsVowels(c))
		cout<<"\nYes Letter \'"<<c<<"\' is Vowel";
	else
		cout<<"\nNo letter \'"<<c<<"\' is NOT Vowel";


}
