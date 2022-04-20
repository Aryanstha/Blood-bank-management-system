#ifndef BLOOD_GROUP_H_INCLUDED
#define BLOOD_GROUP_H_INCLUDED

#include<string>
#include<iostream>
using namespace std;
class Blood_group
{
protected:
    string Blood_group;
public:
    string get_Blood_group();
    void set_Blood_group( string);
};
void Blood_group::set_Blood_group(string n)
{
    Blood_group=n;
}
string Blood_group::get_Blood_group()
{
    return Blood_group;
}

#endif // BLOOD_GROUP_H_INCLUDED
