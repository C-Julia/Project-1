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
    if(rhs.distance_equal(distance));
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