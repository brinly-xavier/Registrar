/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/

#include "Window.h"
#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


//ifstream fileLocation;
//constructor
Window::Window(){
    satis = false;
    windTime = 0;
    idleTime = 0;
    //int numWindows = numWindows;
}
Window::~Window(){

}
//put the students in the window
void Window::receiveStudents(Student* nStudent){
    atWindow = true;
    student = nStudent;
    windTime = 0;
    student->timeEnterQueue++;
}
Student* Window::removeStudents(){
    if(atWindow == true){  
      //if(windTime ==  studentQueue->stWindowTime){
        atWindow = false;
        Student* tmpStudent = student;
        student = NULL;
        return tmpStudent;
   // } 

    }  
    
}
void Window::timeInt(){
    if(atWindow == true){
        
        cout<<"The window time is "<<windTime<<endl;
        windTime++;
        satis = true;
        //student->timeEnterWindow++;
    }
    else{
        idleTime++;
    }   
}

/*void Window::notOccupied(){
    if(atWindow == false){
        idleTime++;
    }
    
    if(atWindow == true){
        cout<<"The idle time is "<<idleTime<<endl;
        idleQueue->insert(idleTime);
        idleTime = 0;
    }
}
*/
