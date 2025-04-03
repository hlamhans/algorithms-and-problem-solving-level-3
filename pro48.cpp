/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pro48.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 03:47:11 by hlamhans          #+#    #+#             */
/*   Updated: 2025/04/03 03:47:12 by hlamhans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include<iomanip>
#include <string>
#include<fstream>
using namespace std;

const string File = "File.txt";

struct sClient
{
    string AccountNumber;
    string pinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

vector <string> SplitString(string str, string delim)
{
    vector<string> vClient;
    short pos = 0;
    string s;
    while((pos = str.find(delim)) != std::string::npos)
    {
        s = str.substr(0, pos);
        if(s != "")
        {
            vClient.push_back(s);
        }
        str.erase(0, pos + delim.length());
    }
    if(str != "")
    {
        vClient.push_back(str);
    }
    return vClient;
}

sClient ConvertLinetoRecord(string Line, string sep = "#//#")
{
    sClient Client;
    vector<string> vClient;
    vClient = SplitString(Line, sep);
    
    Client.AccountNumber = vClient[0];
    Client.pinCode = vClient[1];
    Client.Name = vClient[2];
    Client.Phone = vClient[3];
    Client.AccountBalance = stod(vClient[4]);
    return Client;
}

vector<sClient> LoadCleintsDataFromFile(string FileName)
{
    vector<sClient> vClient;
    fstream MyFile1;
    MyFile1.open(FileName, ios::in);//read Mode
    if(MyFile1.is_open())
    {
        string Line;
        sClient Client;
        while(getline(MyFile1, Line))
        {
            Client = ConvertLinetoRecord(Line);
            vClient.push_back(Client);
        }
        MyFile1.close();
    }   
    return vClient;
}

void PrintClientRecord(sClient Client)
{
    cout << "| " << setw(15) << left << Client.AccountNumber;
    cout << "| " << setw(10) << left << Client.pinCode;
    cout << "| " << setw(40) << left << Client.Name;
    cout << "| " << setw(12) << left << Client.Phone;
    cout << "| " << setw(12) << left << Client.AccountBalance; 
}

void PrintAllClientsData(vector<sClient> vClient)
{
    cout<<"\n\t\t\t\t\tClient List ("<<vClient.size()<<") Client(s).";
    cout<<"\n____________________________________________________________";
    cout << "_____________________________________________\n" << endl;
    cout<<"| "<<left<<setw(15) <<"Account Number";
    cout<<"| "<<left<<setw(10) <<"Pin Code";
    cout<<"| "<<left<<setw(40) <<"Client Name";
    cout<<"| "<<left<<setw(12) <<"Phone";
    cout<<"| "<<left<<setw(12) <<"Account Balance";
    cout<<"\n_______________________________________________________";
    cout << "__________________________________________________\n" << endl;

    for(sClient &Client : vClient)
    {
        PrintClientRecord(Client);
        cout<<endl;
    }



    cout<<"\n_______________________________________________________";
    cout << "__________________________________________________\n" << endl;
}

int main()
{
    vector<sClient> vClient = LoadCleintsDataFromFile(File);
    PrintAllClientsData(vClient);
}