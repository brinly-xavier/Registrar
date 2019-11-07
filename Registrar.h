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
#include "Student.h"
#include "Window.h"
#include <iostream>

using namespace std;

class Registrar
{
  public:
  Window* windowArray;
  Window window;
  GenQueue<Student*> studentQueue;
  Registrar(string fileLocation);//constructor
  Inputer* fCheck;
  
  //the variables
  int openWindow;
  int numWindows;
  int time = 0;
  void SocialConstruct();
  void mWindows();
  void mStudents();
};