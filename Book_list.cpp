//
// Created by Osos on 06/09/2023.
//

#include "Book_list.h"
#include "Book_list.h"
#include <iostream>
using namespace std;

Book_list::Book_list():Book_Info(1){}
void Book_list::search_Book_name(vector<Book_Info>& books, string nam)
{
    int p = 1;
    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].tittle == nam)
        {
            books[i].get_data();
            p = 0;
        }
    }
    if (p)
    {
        cout << "The book has not found\n";
        system("PAUSE");
    }
}
void Book_list::search_Book_id(vector<Book_Info>& books, int z)
{
    int p = 1;
    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].id == z)
        {
            books[i].get_data();
            p = 0;
            system("PAUSE");
            break;
        }
    }
    if (p)
    {
        cout<<"invaild Id\n";
        system("PAUSE");
    }
}
void Book_list::search_Book_athour(vector<Book_Info>&books, string athour)
{
    int p = 1;
    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].athuor == athour)
        {
            books[i].get_data();
            p = 0;
        }
    }
    if (p)
    {
        cout<<"Invail athour name\n";
        system("PAUSE");
    }

}


Book_Info Book_list::add_Book()
{
    Book_Info x;
    x.set_data();
    return Book_Info(x);
}

