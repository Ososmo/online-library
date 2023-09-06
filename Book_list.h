//
// Created by Osos on 06/09/2023.
//

#ifndef ONLINELIBARARY_BOOK_LIST_H
#define ONLINELIBARARY_BOOK_LIST_H
#include "Book_Info.h"
class Book_list :public Book_Info
{
public:
    Book_list();
    Book_Info add_Book();
    void search_Book_name(vector<Book_Info>&,string);
    void search_Book_id(vector<Book_Info>&, int);
    void search_Book_athour(vector<Book_Info>&, string);
};


#endif //ONLINELIBARARY_BOOK_LIST_H
