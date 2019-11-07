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

//constructor
Window::Window(){
    //when the window is created, there are no students in it and the times are set to 0
    satis = false;
    windTime = 0;
    idleTime = 0;
}

//put the students in the window
void Window::receiveStudents(Student* nStudent){
    //the following happens when the students are placed in the window
    atWindow = true;
    student = nStudent;
    windTime = 0;
    //time increments
    student->timeEnterQueue++;
}
Student* Window::removeStudents(){
    //this is what happens when the time is up for the students
    if(atWindow == true){  
        atWindow = false;
        //a temp variable is created so the students is set to null at the window and is cleared
        Student* tmpStudent = student;
        student = NULL;
        return tmpStudent;
    }  
    
}
void Window::timeInt(){
    //this is what happens as time increments
    if(atWindow == true){
        //the time at the window increments if something is there
        windTime++;
        //the window is set to Full
        satis = true;
    }
    else{
        //if there is nothing there then the time for the window increments
        idleTime++;
    }   
}

