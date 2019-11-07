/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/

#include "Student.h"
#include "Registrar.h"
#include "Window.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Student::Student(unsigned int stWindowTime){
    //the following operations occur when the student enters the window
    atWindow = false;
    this->desiredTime = desiredTime;
    //this time is based on how long the student will spend at the window
    desiredTime = stWindowTime;
    //when they enter the window, the student time starts at 0
    timeEnterWindow = 0;
    
}
