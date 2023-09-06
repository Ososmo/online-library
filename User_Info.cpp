//
// Created by Osos on 06/09/2023.
//

#include "User_Info.h"
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp   ' '
#define nl "\n"


int User_Info::count = 1;
User_Info::User_Info(){
    id = count++;
    return;
}

User_Info::User_Info(int){}

void User_Info::set_info()
{
    cout << "\nEnter your name : "; cin >> name;
    cout << "\nEnter your age : "; cin >> age;
    cout << "\nEnter your email : "; cin >> email;
    cout << "\nEnter your password : "; cin >> password;
    cout << "\nsuccessful registeration";
    cout << "\nYour Id is " << id<<"\n";
    system("PAUSE");
}

void User_Info::set_balance()
{
    cout << "Enter the amount of money\n";
    ll num; cin >> num;
    balance += num;
}

void User_Info::get_data()
{
    cout << "\nyour name : "<< name<<nl;
    cout << "\nyour age : "<< age<<nl;
    cout << "\nyour email : "<< email<<nl;
    cout << "\nYour Id : " << id << nl;
    cout << "\nyour balance is : " << balance << nl;
    if (user_books.size() != 0)
    {
        for (auto& i : user_books)
        {
            cout << i.tittle << nl;
        }
    }
    system("PAUSE");

}

void User_Info::change_password()
{
    cout << "Enter Your new password "; cin >> password;
}


bool User_Info::operator==(User_Info x)
{
    if (name == x.name)
    {
        cout << "this name is exist\n";
        return false;
    }
    if (email == x.email)
    {
        cout << "this email is exist\n";
        return false;
    }
    return true;
}

ostream& operator<<(ostream& out, User_Info x)
{
    out << x.name << nl;
    out << x.age << nl;
    out << x.email << nl;
    out << x.id << nl;
    return out;
}

