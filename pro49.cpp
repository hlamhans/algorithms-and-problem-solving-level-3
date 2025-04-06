/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro49.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 11:38:27 by hlamhans          #+#    #+#             */
/*   Updated: 2025/04/06 11:44:51 by hlamhans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;
const string ClientsFileName = "Clients.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord; // define a string variable
		      // // use find() function to get the position of the delimiters
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}
	return vString;
}
sClinet	ConvertLinetoReacord(string	Line, string	Seperator = "#//#")
{
	sClient	Client;
	vector<string>vClinetData;
	
	vClientData = SplitString(Line, Seperator);
	Client = vClientData[0];
	Client = vClientData[1];
	Client = vClientData[2];
	Client = vClientData[3];
	Client = vClientData[4];
	
	return client;
}

