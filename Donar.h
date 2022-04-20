#ifndef Donor_H_INCLUDED
#define Donor_H_INCLUDED
#include<string>
#include<iostream>
#include "Roll.h"
#include "Name.h"
#include "Department.h"
#include "Blood_Group.h"
#include "Contact.h"
using namespace std;
class Donor:public Roll,public Name,public Department,public Blood_group,public Contact
{
protected:
    int no_of_blood_donate;
    string last_date_of_blood_donation;
public:
    void set_no_of_blood_donate(int);
    int get_no_of_blood_donate();
    void set_last_date_of_blood_donation(string);
    string get_last_date_of_blood_donation();
};
void Donor::set_no_of_blood_donate(int n)
{
    no_of_blood_donate=n;
}
void Donor::set_last_date_of_blood_donation(string d)
{
    last_date_of_blood_donation=d;
}
int Donor::get_no_of_blood_donate()
{
    return no_of_blood_donate;
}
string Donor::get_last_date_of_blood_donation()
{
    return last_date_of_blood_donation;
}
#endif // Donor_H_INCLUDED
