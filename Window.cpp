/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/

#include "Window.h"

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
}
void Window::timeInt(){
    if(atWindow == true){
        
        cout<<"The window time is "<<windTime<<endl;
        windTime++;
        satis = true;
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
