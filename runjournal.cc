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

}

void Runjournal::display()const
{
    for(int i = 0; i< num; i++)
    {
        cout << list[i].get_time() << " " << list[i].get_distance() << endl;
    }
}

void Runjournal::record(Runtime newRun)
{
    list[num] = newRun;
    num++;
}

void Runjournal::find_remove(Runtime stime)
{
    for(int i = 0; i < num; i++)
    {
        if(list[i].get_time() == stime.get_time())
        {
            cout << list[i].get_time() << list[i].get_distance() << endl;
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

void Runjournal::distance_view(double& sdist)
{
    for(int i = 0; i < num; i++)
    {
        if(list[i].get_distance() == sdist)
        {
            cout << list[i].get_time() << " " << list[i].get_distance() << endl;
        }
    }
}

