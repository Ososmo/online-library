//
// Created by Osos on 06/09/2023.
#include <bits/stdc++.h>
#include "Book_Info.h"
#include "Book_list.h"
using namespace std;
vector <Book_Info>books;


void setrate(vector<Book_Info>& books, string a)
{
    for (auto&i : books)
    {
        if (i.tittle == a)
        {
            cout << "Enter your rate : ";
            double n; cin >> n;
            if (n > 10 || n < 0)
            {
                cout << "Wrong rate\n";
            }
            else
            {
                i.numofrate++;
                double k = i.rate + (double)(n / 10);
                k /= i.numofrate;
                i.rate = k;
                return;
            }

        }
    }
    cout << "Press Enter to continue...";
    cin.get();

}
void getrate(vector<Book_Info>& books)
{
    set<pair<string, double>>se;
    for (auto&i : books)
    {
        se.emplace(make_pair(i.tittle, i.rate));
    }
    cout << "\n";
    for (auto i=se.rbegin();i!=se.rend();i++)
    {
        cout << i->first << ' ' << i->second << '\n';
    }
    system("PAUSE");
}
void go_to_bookfile()
{

    while (true)
    {
        system("cls");
        cout << "1- Create a book and add it to the list\n";
        cout << "2 - Search for a book\n";
        cout << "3 - Display all books(with book rating)\n";
        cout << "4 - Get the highest rating\n";
        cout << "5 - Rate a book\n";
        cout << "6 - Back to the main menu\n";
        string  num; cin >> num;
        if (num == "1")
        {
            Book_Info x;
            x.set_data();
            books.push_back(x);
        }
        else if (num == "2")
        {
            Book_list x;
            cout << "How do You want to search\n1- by name\n2- by Id\n3-by athour\n4- return to book menu\n";
            int n; cin >> n;
            if (n == 1)
            {
                string name;
                cout << "Enter name "; cin >> name;
                x.search_Book_name(books, name);
            }
            else if (n == 2)
            {
                int id;
                cout << "Enter Id "; cin >> id;
                x.search_Book_id(books, id);
            }
            else if (n == 3)
            {
                string name;
                cout << "Enter Athour name "; cin >> name;
                x.search_Book_athour(books, name);
            }
            else
            {
                continue;
            }
        }
        else if (num == "3")
        {
            for (auto& i : books)i.get_data();
        }
        else if (num == "4")
        {

            getrate(books);
        }
        else if (num == "5")
        {
            string name;
            cout << "Enter Book name "; cin >> name;
            setrate(books, name);
        }
        else if (num == "6")
        {
            return;
        }

    }
}

vector<Book_Info> pass()
{
    return books;
}
//
