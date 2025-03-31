/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro39.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 22:12:23 by hlamhans          #+#    #+#             */
/*   Updated: 2025/03/31 22:14:41 by hlamhans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <vector>
using namespace std;

string JoinString(vector<string> vString, string Delim)
{
	string str = "";
	for(string &s : vString)
		str = str + s + Delim;
	return str.substr(0, str.length() - Delim.length());
}

int main()
{
	vector <string> vStr = {"hamza", "lamhansal","oussama","Ail"};
	cout<<JoinString(vStr, "	");
}
