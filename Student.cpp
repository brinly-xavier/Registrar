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
    atWindow = false;
    this->desiredTime = desiredTime;
    desiredTime = stWindowTime;// = //Registrar.plugStudents;
    //timeEnterQueue = registrar->time;
    timeEnterWindow = 0;
    
}
Student::~Student(){
    
}
