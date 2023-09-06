//
// Created by Osos on 06/09/2023.
//

#include "Book_Info.h"
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp   ' '
#define nl "\n"
int Book_Info::book_count = 1;
Book_Info::Book_Info() { id = book_count++,rate=0.0; }

Book_Info::Book_Info(int){}


void Book_Info::get_data()
{
    cout << "The name of the book is : " << tittle<< nl;
    cout << "The name of the athouor is : " << athuor << nl;
    cout << "Book rating : " << fixed << setprecision(2) <<rate << nl;
    cout << "The book capasity : " << capasity << nl;
    cout << "Enter Book price : " << price << nl;
    cout << "Id : " << id << nl;
    system("PAUSE");

}

void Book_Info::set_data()
{
    cout << "\nEnter Book name : "; cin >> tittle;
    cout << "\nEnter Name of the book author : "; cin >> athuor;
    cout << "\nEnter Book capasity : "; cin >> capasity;
    cout << "\nEnter Book price : "; cin >> price;
}

bool Book_Info::operator==(Book_Info x)
{
    if(tittle==x.tittle )
        return false;
    return true;
}
