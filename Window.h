/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/
#pragma once
#include <iostream>
#include "Student.h"
#include "GenQueue.h"

using namespace std;

class Window
{
  private:
  Student* student;

  public:

  Window();
  void receiveStudents(Student* nStudent);
  Student* removeStudents();
  void timeInt();
  void notOccupied();

  //the variables
  
  //the booleans for the windows are set
  bool satis;
  bool atWindow;
  // these variables are for the time
  int idleTime;
  int windTime;
};