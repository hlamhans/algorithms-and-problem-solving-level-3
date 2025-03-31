/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro35.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:43:49 by hlamhans          #+#    #+#             */
/*   Updated: 2025/03/30 17:25:47 by hlamhans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
using namespace std;

string ReadString()
{
	string str;
	cout<<"\nPlease Enter a String : ";
	getline(cin, str);
	return str;
}

void	PrintEachWordInString(string str)
{
	string	delim = " ";
	cout<<"\nYour string words are :\n\n";
	short pos;
	string sWord;
	while((pos = str.find(delim)) != std::string::npos)
	{
		sWord = str.substr(0, pos);
		if (sWord != "")
			cout<<sWord<<endl;
		str.erase(0, pos + delim.length());
	}
	if(str != "")
		cout<<str<<endl;
}

int main()
{
	PrintEachWordInString(ReadString());
}

