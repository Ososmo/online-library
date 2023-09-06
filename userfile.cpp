//
// Created by Osos on 06/09/2023.
//

#include<bits/stdc++.h>
#include"User_Info.h"
#include "Book_Info.h"
#include "user_list.h"
#include "book_list.h"
#include"bookfile.h"
using namespace std;
vector<User_Info>users;
int idx = 0;
bool chk()
{
    cout << "\nEnter Your ID And  password\n";
    int x;
    string k;
    cout << "\nEnter Id : ";
    cin >> x;
    cout << "\nEnter Password : ";
    cin.ignore();
    getline(cin,k);
    idx = 0;
    for (auto& i : users)
    {
        if ((i.id == x) && i.password == k)
        {
            return true;
        }idx++;
    }return false;
}

void buy(User_Info info,int index)
{
    string name;
    cout << "Enter name of book "; cin >> name;
    user_list x;
    vector<Book_Info>v;
    v = pass();
    vector<Book_Info> found = x.search_book(v, name);
    if (found.size() == 0)
    {
        cout << "The book does not found\n";
        system("PAUSE");

    }
    else
    {

        int count = 1;
        cout << "\nEnter num of book\n";
        for (auto i : found)
        {
            cout << count << ' ' << i.tittle << ' ' << i.price << '\n';
        }int num; cin >> num;
        if (found[num - 1].price <= info.balance)
        {
            info.user_books.push_back(found[num - 1]);
            users[index].balance -= found[num - 1].price;
        }
        else
        {
            cout << "Your balancee is not Enough\n";
            system("PAUSE");
        }
    }
}

void go_to_userfile()
{
    while (true)
    {
        string n;
        system("cls");

        cout << "USERS MENU\n1 - Create a USER and add it to the list\n2 - Search for a user\n3 - Display all users\n4 - change your password\n";
        cout << "5- buy book\n6-Pay money\n7- Back to main\n";
        cin >> n;

        if (n == "1")
        {
            user_list x;

            users.push_back(x.add_user());
        }
        else if (n == "2")
        {
            cout << "How do You want to search\n 1- by name\n 2- by Id\n 3- by email\n";

            int num; cin >> num;
            user_list x;
            if (num == 1)
            {
                string name;
                cout << "\nEnter name : "; cin >> name;
                x.search_user_name(users, name);

            }
            else if (num == 2)
            {
                int id;
                cout << "\nEnter ID : "; cin >> id;
                x.search_user_id(users, id);
            }
            else if (num == 3)
            {
                string email;
                cout << "\nEnter email : "; cin >> email;
                x.search_user_email(users, email);

            }
        }
        else if (n == "3")
        {
            for (auto& i : users)
            {
                system("cls");
                i.get_data();
            }
        }
        else if (n == "4")
        {

            if (chk())
            {
                users[idx].change_password();
            }
            else
            {
                cout << "\nwrong Id or password\n";
                cout << "Press Enter to continue...";
                cin.get();
            }
        }
        else if (n == "5")
        {

            if (chk())
            {
                buy(users[idx], idx);
            }
            else
            {
                cout << "\nwrong Id or password\n";
                system("PAUSE");
            }
        }
        else if (n == "6")
        {
            if (chk())
            {
                users[idx].set_balance();
            }
            else
            {
                cout << "\nwrong Id or password\n";
                cout << "Press Enter to continue...";
                cin.get();

            }


        }
        else return;
    }
}