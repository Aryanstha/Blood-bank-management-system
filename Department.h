#ifndef DEPARTMENT_H_INCLUDED
#define DEPARTMENT_H_INCLUDED
#include<string>
#include<iostream>
using namespace std;
class Department
{
protected:
    string department;
public:
    string get_department();
    void set_department( string);
};
void Department::set_department(string d)
{
    department=d;
}
string Department::get_department()
{
    return department;
}

#endif // DEPARTMENT_H_INCLUDED
