/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro43.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:27:41 by hlamhans          #+#    #+#             */
/*   Updated: 2025/04/02 22:51:32 by hlamhans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <vector>
using namespace std;

vector<string> SplitString(string str, string delim)
{
	vector<string> vStr;
	short pos = 0;
	string s1;
	while((pos = str.find(delim)) != std::string::npos)
	{
		s1 = str.substr(0, pos);
		if(s1 != "")
			vStr.push_back(s1);
		str.erase(0, pos + delim.length());
	}
	if(s1 != "")
		vStr.push_back(str);
	return vStr;
}

string JoingString(vector<string> vString, string delim)
{
	string s1;
	for(string &s : vString)
	{
		s1 = s1 + s + delim;
	}
	return s1.substr(0, s1.length() - delim.length());
}

string LowerAllString(string str)
{
	for(short i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
	return str;
}

string ReplaceWordInStringUsingSplit(string str, string StrToReplace,  string sReplace, bool MatchCase = true)
{
	vector<string> vString = SplitString(str, " ");
	for(string &s : vString)
	{
		if(MatchCase)
		{
			if(str == StrToReplace)
			{
				str = sReplace;
			}
			else
			{
				if(LowerAllString(str) == LowerAllString(StrToReplace))
					str = sReplace;
			}
		}
	}
	return JoingString(vString, " ");
}


int main()
{
	string S1 = "Welcome to Morocco , Morocco is a nice country";
	string StringToReplace = "Morocco";
	string ReplaceTo = "USA";
	cout << "\nOriginal String:\n" << S1;
	cout << "\n\nReplace with match case: ";
	cout << "\n" << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo);
	cout << "\n\nReplace with dont match case: ";
	cout << "\n" << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo, false);
}


