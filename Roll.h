#ifndef ROLL_H_INCLUDED
#define ROLL_H_INCLUDED

#include<string>
#include<iostream>
using namespace std;
class Roll
{
protected:
    long int roll;
public:
    long int get_roll();
    void set_roll(long int);
};
void Roll::set_roll(long int  r)
{
    roll=r;
}
long int Roll::get_roll()
{
    return roll;
}


#endif // ROLL_H_INCLUDED
