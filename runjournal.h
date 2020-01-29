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

    void record(Runtime newRun);//adds a run passed as a parameter
    void display()const;//displays ALL Runtimes in the container

    void find_remove(Runtime stime);//should display first matche and the time AND distance and give an option to remove it
    void distance_view(double& sdist);//view ALL Runtimes of a certain distance

    void sort_by_time();//
    void sort_by_distance();

    MyTime total_time();
    double total_distance();
    double average_pace();

    private:
    Runtime list [CAPACITY];
    int num;
};
#endif