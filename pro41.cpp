/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro41.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 22:53:09 by hlamhans          #+#    #+#             */
/*   Updated: 2025/03/31 23:26:09 by hlamhans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include<vector>
using namespace std;

string ReadString()
{
	string str;
	cout<<"\nPleaes Enter a string :";
	getline(cin ,str);
	return str;
}

vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord; // define a string variable
		      //use find() function to get the position of the delimiters
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
			vString.push_back(sWord);
		S1.erase(0, pos + Delim.length()); /* erase() until
		positon and move to next word. */
	}
	if (S1 != "")
		vString.push_back(S1); // it adds last word of the string.
	return vString;
}

string ReversWordsInString(string str)
{
	vector<string> vStr;
	string res = "";
	vStr = SplitString(str, " ");
	vector<string>::iterator iter = vStr.end();
	while(iter != vStr.begin())
	{
		--iter;
		res += *iter + " ";
	}
	res = res.substr(0, res.length() - 1);
	return res;
}

int main()
{
	string str = ReadString();
	cout<<"\n\nString after reversing word:";
	cout<<"\n"<<ReversWordsInString(str);

}
