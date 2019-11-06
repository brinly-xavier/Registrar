/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/

#pragma once
#include <iostream>

using namespace std;

class Student
{
  public:
  Student(int waitTime);
  unsigned int timeLeftWindow;
  unsigned int timeEnterQueue;
  unsigned int timeLeftQueue;
  int waitTime;
  ~Student();
};