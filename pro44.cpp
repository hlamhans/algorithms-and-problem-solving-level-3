/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro44.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 02:39:45 by hlamhans          #+#    #+#             */
/*   Updated: 2025/04/03 02:47:27 by hlamhans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string RemovePunctuationsFromString(string str)
{
	string s = "";
	for(short i = 0; i < str.length(); i++)
	{
		if(!(ispunct(str[i])))
			s += str[i];
	}
	return s;
}

int main()
{
	string str = "Welcome to Morocco, Morocco is a nice country; it's amazing.";
	cout<<"Original String:\n"<<str;
	cout<<"\n\nPauncuations Removed:\n"<<RemovePunctuationsFromString(str);
}
