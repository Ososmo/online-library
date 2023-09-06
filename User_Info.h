//
// Created by Osos on 06/09/2023.
//

#ifndef ONLINELIBARARY_USER_INFO_H
#define ONLINELIBARARY_USER_INFO_H
#pragma once
#include <bits/stdc++.h>
#include "Book_Info.h"
using namespace std;
#define ll long long

class User_Info
{
public:
    string name;
    string email;
    string password;
    int age;
    int id;
    double  balance=0.0;
    vector<Book_Info>user_books;
    static int count;

    User_Info();

    User_Info(int);

    void set_info();
    void set_balance();
    virtual void get_data();
    void change_password();


    bool operator ==(User_Info);
    friend ostream& operator<<(ostream& out, User_Info x);


};
#endif //ONLINELIBARARY_USER_INFO_H
