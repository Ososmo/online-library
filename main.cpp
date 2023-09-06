#include <bits/stdc++.h>
#include "userfile.h"
#include "Bookfile.h"
using namespace std;
#define ll long long
#define sp   ' '
#define nl "\n"
#define pb push_back
#define all(a)   a.begin(),a.end()
#define fixed cout<<fixed<<setprecision(0)
int main()
{
    string num = "10";
    while (num != "0")
    {
        system("cls");
        cout << "Select one of the following choices :\n1 - Books Menu \n2 - Users Menu \n3 - Exit\n";
        cin >> num;
        if (num == "1")
        {
            go_to_bookfile();
        }
        else if (num == "2")
        {
           go_to_userfile();

        }
        else
        {
            cout << "Are You sure to exist\n if YES choose 1\nelse choose 2\n";
            cin >> num;
            if (num == "1")
                break;
            else
                continue;
        }

    }

}