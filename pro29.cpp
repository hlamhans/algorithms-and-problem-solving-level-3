#include<iostream>
#include <string>

using namespace std;

string ReadString()
{
	string str;
	cout<<"\nEnter you string :";
	getline(cin,str);
	return str;
}
enum enWhatToCount {SmallLetter = 0, CapitalLetter = 1};

short  Countletters(string str, enWhatToCount what_to_count)
{
	short count = 0;
	for(short i = 0; i < str.length(); i++)
	{
		if(what_to_count == enWhatToCount::CapitalLetter && isupper(str[i]))
			count++;
		if(what_to_count == enWhatToCount::SmallLetter && islower(str[i]))
			count++;
	}
	return count;
}

int main()
{
	string str = ReadString();
	cout<<"String Letter = "<<str.length();
	cout<<"\nCapital Letter Count = "<<Countletters(str, enWhatToCount::CapitalLetter);
	cout<< "\nSmall Letter Count = "<<Countletters(str, enWhatToCount::SmallLetter)<<endl;


}
