//
// Julia Cygan
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
Runtime::Runtime()
{

}

//ACCESSORS 
double Runtime::get_distance()const
{
    return distance;
}
MyTime get_time()const
{
    return rtime;
}

//MUTATORS 
void set_time(const MyTime& myt)
{
    rtime = myt;
}
void set_distance(const double& d)
{
    distance = d;
}

//HELPER FUNCTIONS
MyTime pace()
{
    return rtime/distance;
}
bool distance_equal(double d) const
{

}

//OVERLOADING OPERATORS
Runtime operator +(const Runtime& rhs)const
{

}
Runtime operator -(const Runtime& rhs)const
{

}
Runtime operator *(const double& rhs) const
{

}
Runtime operator /(const double& rhs) const
{

}
bool operator == (const Runtime& rhs)const
{

}
bool operator != (const Runtime& rhs)const
{

}

//INPUTS OUTPUTS
void input(std::istream& ins);
void output(std::ostream& outs)const;