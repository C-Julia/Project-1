//Julia Cygan
//Jan 26th, 2020
//CS 2401
//JC362818@ohio.edu

#include "runjournal.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

Runjournal::Runjournal()
{
    num = 0;
}

void Runjournal::display()const
{
    for(int i = 0; i< num; i++)
    {
        cout << list[i].get_time() << " " << list[i].get_distance() << endl;
    }
}

void Runjournal::record(const Runtime& newRun)
{
    list[num] = newRun;
    num++;
}

void Runjournal::find_remove(const Runtime& stime, const double& sdist)
{
    bool found = false;
    for(int i = 0; i < num; i++)
    {
        if(list[i].get_time() == stime.get_time())
        {
            if(list[i].distance_equal(sdist))
            {
                found = true;
                cout << list[i].get_time() << list[i].get_distance() << endl;// ADD PACE variable
                cout << "Would you like to remove this entry? Y/N " << endl;
                char answer;
                cin >> answer;
                if(answer == 'Y')
                {
                    list[i] = list[num];
                    num --;
                }
                break;
            }
        }
    }
    if(found == false)
    {
        cout << "No instance of a run with the specified variables." << endl;
    }
}

void Runjournal::distance_view(const double& sdist)const
{
    for(int i = 0; i < num; i++)
    {
        if(list[i].distance_equal(sdist))
        {
            cout << list[i].get_time() << " " << list[i].get_distance() << endl;
        }
    }
}

void Runjournal::sort_by_time()
{
    for(int i = 0; i < num-1; i++)
    {
        for(int j = 1; j < num; j++)
        {
            if(list[j].get_time() < list[i].get_time())
            {
                Runtime temp;
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

void Runjournal::sort_by_distance()
{
    for(int i = 0; i < num-1; i++)
    {
        for(int j = 1; j < num; j++)
        {
            if(list[i].get_distance() > list[j].get_distance())
            {
                Runtime temp;
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

MyTime Runjournal::total_time()
{
    MyTime sum = 0;
    for(int i = 0; i < num; i++)
    {
        sum = sum + list[i].get_time();
    }
    return sum;
}

double Runjournal::total_distance()
{
    double sum = 0;
    for(int i = 0; i < num; i++)
    {
        sum = sum + list[i].get_distance();
    }
    return sum;
}

MyTime Runjournal::average_pace()
{
    MyTime temp;
    temp = total_time()/total_distance();
    return temp;
}

void Runjournal::save(std::ostream& ofs)
{
    for(int i = 0; i < num; i++)
    {
        ofs << list[i].get_time() << " " << fixed << setprecision(2) << list[i].get_distance() << endl;
    }
}