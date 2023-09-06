//
// Created by Osos on 06/09/2023.
//

#ifndef ONLINELIBARARY_BOOK_INFO_H
#define ONLINELIBARARY_BOOK_INFO_H
#include <bits/stdc++.h>
using namespace std;
class Book_Info {
public:
    string tittle;
    string athuor;
    int id;
    double rate;
    long long capasity;
    double numofrate=0;
    double price = 0.0;
    static int book_count;
    Book_Info();
    Book_Info(int);
    void get_data();
    void set_data();
    bool operator ==(Book_Info);
};


#endif //ONLINELIBARARY_BOOK_INFO_H
