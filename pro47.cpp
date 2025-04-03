/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro47.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 03:47:05 by hlamhans          #+#    #+#             */
/*   Updated: 2025/04/03 03:47:06 by hlamhans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

const string ClientsFileName = "File.txt";
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
    // Usage of std::ws will extract allthe whitespace characte
    getline(cin >> ws, Client.AccountNumber);

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

void AddDataLineToFile(string FileName, string stDataLine)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);
    if(MyFile.is_open())
    {
        MyFile << stDataLine<<endl;
        MyFile.close();
    }
}
void AddNewClient()
{
    sClient Client = ReadNewClient();
    AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));
}
void AddClient()
{
    char AddMore = 'Y';
    do
    {
        system("clear");
        cout<<"Adding new Client:\n\n";
        AddNewClient();
        cout<<"\nClient Added Successfully, do you want to addmore clients? Y/N?";
        cin>>AddMore;
    } while (toupper(AddMore) == 'Y');
    
}

int main()
{
    AddClient();
    system("pause>0");
}