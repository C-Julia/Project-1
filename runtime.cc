//Julia Cygan
//Jan 26th, 2020
//CS 2401
//JC362818@ohio.edu
#include "runtime.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

Runtime::Runtime()
{
    distance = 0;
}

Runtime Runtime::operator +(const Runtime& rhs)const
{
    Runtime temp;
    temp.set_distance(distance + rhs.get_distance());
    temp.set_time(rtime + rhs.get_time());
    return temp;
}

Runtime Runtime::operator -(const Runtime& rhs)const
{
    Runtime temp;
    temp.set_distance(distance - rhs.get_distance());
    temp.set_time(rtime - rhs.get_time());
    return temp;
}

Runtime Runtime::operator *(const double& rhs)const
{
    Runtime temp;
    temp.set_distance(distance * rhs);
    temp.set_time(rtime * rhs);
    return temp;
}

Runtime Runtime::operator /(const double& rhs)const
{
    Runtime temp;
    temp.set_distance(distance / rhs);
    temp.set_time(rtime / rhs);
    return temp;
}

bool Runtime::operator == (const Runtime& rhs)const
{
    if(rhs.distance_equal(distance))
    {
        if(rtime == rhs.get_time())
        {
            return true;
        }
    }
    return false;
}

bool Runtime::distance_equal(double d)const
{
    double temp = distance - d;
    if(temp <0)
    {
        temp = temp * -1;
    }
    if(temp < 0.1)
    {
        return true;
    }
    return false;
}

bool Runtime::operator != (const Runtime& rhs)const
{
    if(rhs.distance_equal(distance))
    {
        if(rtime == rhs.get_time())
        {
            return false;
        }
    }
    return true;
}

void Runtime::input(std::istream& ins)
{
    int temphours;
    int tempminutes;
    int tempseconds;
    char junk;
    ins>>temphours;
    ins.get(junk);
    ins>>tempminutes;
    ins.get(junk);
    ins>>tempseconds;
    MyTime temp(temphours, tempminutes, tempseconds);
    ins >> distance;
    rtime = temp;
}

void Runtime::output(std::ostream& outs)const
{
    outs<<rtime.get_hours()<<':'<<setw(2)<<setfill('0')<<rtime.get_minutes();
    outs<<':'<<setw(2)<<setfill('0')<<rtime.get_seconds();
    outs << setprecision(1) << setfill(' ') << distance << endl;
}

std::ostream& operator <<(std::ostream& outs, const Runtime& rhs)
{
    rhs.output(outs);
    return outs;
}
std::istream& operator >>(std::istream& ins, Runtime& rhs)
{
    rhs.input(ins);
    return ins;
}