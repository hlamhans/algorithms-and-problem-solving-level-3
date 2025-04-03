/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro45.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 02:47:44 by hlamhans          #+#    #+#             */
/*   Updated: 2025/04/03 03:20:04 by hlamhans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

sClient ReadNewClient()
{
    sClient Client;
    cout<<"Enter Account Number : ";
    getline(cin, Client.AccountNumber);

    cout<<"Enter Name : ";
    getline(cin, Client.Name);

    cout<<"Enter PinCode : ";
    getline(cin, Client.PinCode);

    cout<<"Enter Phone : ";
    getline(cin, Client.Phone);

    cout<<"Enter AccountBalance : ";
    cin >>Client.AccountBalance;

    return Client;
}

string ConvertRecordToLine(sClient Client, string sep = "#//#")
{
    string str = "";
    str += Client.AccountNumber + sep;
    str += Client.Name + sep;
    str += Client.PinCode + sep;
    str += Client.Phone + sep;
    str += to_string(Client.AccountBalance);
    return str;
}

int main()
{
    sClient Client;
    Client = ReadNewClient();
    cout<<"\n\nClinet Record for Saving is : \n";
    cout<<ConvertRecordToLine(Client);
    return (0);

}