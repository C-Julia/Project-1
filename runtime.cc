//
// Julia Cygan
// jc362818@ohio.edu
// February 1st, 2020
// CS 2401
// John Dolan
//

#include "runtime.h"
#include "Mytime.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//CONSTRUCTORS
Runtime::Runtime(MyTime rt=0, double d=0)
{
    rtime = rt;
    if(d <= 0)
    {
        distance = 0;
    }
    else
    {
        distance = d;
    }
}

//OVERLOADING OPERATORS
Runtime Runtime::operator +(const Runtime& rhs)const
{
    Runtime temp;
    temp.rtime = rhs.rtime + rtime;
    temp.distance = rhs.distance + distance;
    return temp;
}

Runtime Runtime::operator -(const Runtime& rhs)const
{

}

//INPUTS OUTPUTS
void input(std::istream& ins);
void output(std::ostream& outs);