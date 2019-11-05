/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/
#pragma once
#include "GenQueue.h"
#include "Window.h"
#include <iostream>

using namespace std;

class Inputer
{
  public:
  Inputer(string fileLocation);//constructor
  ~Inputer();//deconstructor
  //GenQueue <Window>* windowQueue; //the queue has the list of windows
  void fCheck(string fileLocation);//method does the checking
  GenQueue <int> *fileQueue;
  
};