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
  Student(unsigned int stWindowTime);

  //the variables 

  //this looks at if something is at the window
  bool atWindow;
  unsigned int timeExit;
  unsigned int timeEnterQueue;
  unsigned int timeEnterWindow;
  unsigned int desiredTime;
};