/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/

#include "Student.h"
#include "Statistics.h"
#include "Registrar.h"
#include "Window.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
Statistics::Statistics(Registrar* registrar){
    //this will get the stats based on the registrar it is working on
    this->registrar = registrar;
}

void Statistics::doTheMath(){
    //this performs the math based on the time stamps stored throughout the simulation
      unsigned int totalIdle = 0;
      longIdle = 0;
    //the stats for when the windows are idle
      for(int i = 0; i < registrar->numWindows; ++i){
        totalIdle += registrar->windowArray[i].idleTime;

        if(longIdle < registrar->windowArray[i].idleTime){
          longIdle = registrar->windowArray[i].idleTime;
        }

        if(registrar->windowArray[i].idleTime > 5){
          overFive++;
        }
      }

      idle = totalIdle / registrar->numWindows;

      unsigned int totalWaitTime = 0;
      unsigned int waitTime = 0;
    //the stats for the students waiting in the line
      for(int i = 0; i < registrar->numWindows; ++i){
       //waitTime = registrar->studentQueue->timeEnterQueue - registrar->studentQueue->timeEnterWindow;
        totalWaitTime += waitTime;

        if(big < waitTime){
          big = waitTime;
        }

        if(waitTime > 10){
          overTen++;
        }
      }
      mean = totalWaitTime / registrar->numWindows;
      //the output of the statistics
      cout<<"The mean student wait time: "<<mean<<endl;
      cout<<"The median student wait time: "<<median<<endl;
      cout<<"The longest student wait time: "<<big<<endl;
      cout<<"The number of students waiting over 10 minutes: "<<overTen<<endl;
      cout<<"The mean window idle time: "<<idle<<endl;
      cout<<"The longest window idle time: "<<longIdle<<endl;
      cout<<"Number of windows idle for over 5 minutes: "<<overFive<<endl;

}