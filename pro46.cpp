/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro46.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 03:46:59 by hlamhans          #+#    #+#             */
/*   Updated: 2025/04/03 03:47:00 by hlamhans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct sclient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

vector<string> Split(string str, string delim)
{
    vector<string> vString;
    short pos = 0;
    string s;
    while((pos = str.find(delim)) != std::string::npos)
    {
        s = str.substr(0, pos);
        if(s != "")
        {
            vString.push_back(s);
        }
        str.erase(0, pos + delim.length());
    }    
    if(str != "")
    {
        vString.push_back(str);
    }
    return vString;
}

sclient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
    sclient Client;
    vector<string> vString;
    vString = Split(Line, Seperator);
    Client.AccountNumber = vString[0];
    Client.PinCode = vString[1];
    Client.Name = vString[2];
    Client.Phone = vString[3];
    Client.AccountBalance = stod(vString[4]);//cast string to double
    return Client;
     
}

void PrintClientRecord(sclient Client)
{
    cout << "\n\nThe following is the extracted client record:\n";
    cout << "\nAccout Number: " << Client.AccountNumber;
    cout << "\nPin Code : " << Client.PinCode;
    cout << "\nName : " << Client.Name;
    cout << "\nPhone : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}

int main()
{
    string str = "A150#//#1234#//#Hamza#//#079999#//#5270.000000";
    cout<<"\nLine Record is:\n";
    cout<<str;

    sclient client = ConvertLinetoRecord(str);
    PrintClientRecord(client);
    return (0);
}