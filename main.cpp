#include <iostream>
#include<windows.h>
#include "Data_base.h"
#include<cstring>
using namespace std;
int main()
{
    Data_base db;
    while(1)
    {
        int n;
        cout<<"\n\t\t===========================================";
        cout<<"\n\t\t|   Blood Bank Management System          |"<<endl;
        cout<<"\t\t===========================================";
        cout<<"\n\t \t \t ::Enter Your Choice::"<<endl;
        cout<<"\n\t\t\t (1) Add New Data \t\n\t\t\t (2) View List Of Donor   \n\t\t\t (3) Search Donor \t\n\t\t\t (4) Exit \t\t"<<endl;
        cout<<"\t\t\t: ";
        cin>>n;
        switch (n)
        {

        case 1:
        {
            system("cls");
            db.Data("Add New");
        }
        break;

        case 2:
        {
            system("cls");
            db.Data("View");
        }
        break;
        case 3:
        {
            system("cls");
            db.Data("Search");
        }
        break;
        case 4:
        {
            return 0;
        }
        break;

        default:
        {
            system("cls");
            cout<<"\a\aPlease Enter your choice Correctly:\a\a"<<endl;
        }
        break;
        }

    }
    return 0;
}
