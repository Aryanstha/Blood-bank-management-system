#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED
#include<string>
#include<iostream>
using namespace std;
class Contact
{
protected:
    string phone_no;
    string email;
public:
    void set_phone_no(string);
    void set_email(string);
    string get_phone_no();
    string get_email();
};
void Contact::set_phone_no(string p)
{
    phone_no=p;
}
void Contact::set_email(string e)
{
    email=e;
}
string Contact::get_phone_no()
{
    return phone_no;
}
string Contact::get_email()
{
    return email;
}
#endif // CONTACT_H_INCLUDED
