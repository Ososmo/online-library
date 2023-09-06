//
// Created by Osos on 06/09/2023.
//

#include "user_list.h"
#include<bits/stdc++.h>

user_list::user_list():User_Info(1){}

void user_list::search_user_name(vector<User_Info>&users,string nam)
{
    for (int i=0;i<users.size();i++)
    {
        if (users[i].name == nam)
        {
            users[i].get_data();
            system("PAUSE");
            return;
        }
    }
    cout << "The user has not found\n";
    system("PAUSE");
}

void user_list::search_user_id(vector<User_Info>& users, int x)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].id == x)
        {
            users[i].get_data();
            system("PAUSE");
            return;
        }
    }
    cout << "The user has not found\n";
    system("PAUSE");
}

void user_list::search_user_email(vector<User_Info>& users, string mail)
{
    int p = 1;
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].email == mail)
        {
            users[i].get_data();
            system("PAUSE");
            p = 0;
            break;
        }
    }
    if (p)
    {
        cout << "The user has not found\n";
        system("PAUSE");
    }
}

User_Info user_list::add_user()
{
    User_Info x;
    x.set_info();
    return User_Info(x);
}

vector<Book_Info>user_list::search_book(vector<Book_Info>&books ,string name)
{
    int p = 1;
    vector<Book_Info> tmp;
    for (auto& i : books)
    {
        if (i.tittle == name)
        {
            tmp.push_back(i);
        }
    }
    return tmp;
}




