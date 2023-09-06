cmake_minimum_required(VERSION 3.25)
project(onlinelibarary)

set(CMAKE_CXX_STANDARD 17)

add_executable(onlinelibarary main.cpp Book_Info.cpp Book_Info.h Book_list.cpp Book_list.h bookfile.cpp bookfile.h User_Info.cpp User_Info.h user_list.cpp user_list.h userfile.cpp userfile.h)
