//Julia Cygan
//Jan 26th, 2020
//CS 2401
//JC362818@ohio.edu

#include<iostream>
#include "runtime.h"
#ifndef RUNJOURNAL_H
#define RUNJOURNAL_H

class Runjournal
{
    public:
    static const int CAPACITY = 200;

    //default constructor
    Runjournal();

    void record(const Runtime& newRun);//adds a run passed as a parameter
    void display()const;//displays ALL Runtimes in the container
    void save(std::ostream& ofs);

    void find_remove(const Runtime& stime, const double& sdist);//should display first matche and the time AND distance and give an option to remove it
    void distance_view(const double& sdist)const;//view ALL Runtimes of a certain distance

    void sort_by_time();//Highest to lowest or lowest to highest?
    void sort_by_distance();//do lowest to highest for now

    MyTime total_time();
    double total_distance();
    MyTime average_pace();

    private:
    Runtime list [CAPACITY];
    int num;
};
#endif