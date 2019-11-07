/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/
#pragma once
#include "GenQueue.h"
#include "Inputer.h"
#include "Registrar.h"
#include "Student.h"
#include "Window.h"
#include <iostream>

using namespace std;

class Statistics
{
  public:
    Statistics(Registrar *registrar);
    Registrar* registrar;
    void doTheMath();
    //the variables
    unsigned int mean;
    unsigned int median;
    unsigned int big = 0;
    unsigned int overTen;
    float idle;
    float longIdle;
    unsigned int overFive;
    

};