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
  //int numWindows;
  Window();
  ~Window();
  GenQueue<int> *idleQueue;
  void receiveStudents(Student* nStudent);
  void timeInt();
  void notOccupied();
  //the variables
  bool satis;
  bool atWindow;
  int idleTime;
  int windTime;
};