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
    //default constructor
    Runjournal();

    void add_run();
    void display();

    void search_by_time();// both should display all matches and the time AND distance
    void search_by_distance();// should include the option to remove in case it was recorded incorrectly

    void sort_by_time();
    void sort_by_distance();

    MyTime total_time();
    int total_distance();
    double average_pace();

    private:
    Runtime list [200];
    int num;
};


#endif