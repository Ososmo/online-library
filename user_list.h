//
// Created by Osos on 06/09/2023.
//

#ifndef ONLINELIBARARY_USER_LIST_H
#define ONLINELIBARARY_USER_LIST_H
#include"User_Info.h"
class user_list :public User_Info
{
public:
    user_list();
    void search_user_name(vector<User_Info>&,string);
    void search_user_id(vector<User_Info>&,int);
    void search_user_email(vector<User_Info>&,string);
    User_Info add_user();
    vector<Book_Info> search_book(vector<Book_Info>&,string);
    friend ostream& operator<<(ostream& out, User_Info x);
};



#endif //ONLINELIBARARY_USER_LIST_H
