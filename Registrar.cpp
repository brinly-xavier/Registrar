/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/

#include "Registrar.h"
#include "Student.h"
#include "Inputer.h"
#include "Window.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//The constructor
Registrar::Registrar(string fileLocation){
    //this reads the file 
    fCheck = new Inputer(fileLocation);
    //the number of windows is removed from the file queue
    numWindows = fCheck->fileQueue->remove();
    //the array for the window is created
    mWindows();
}
void Registrar::SocialConstruct(){
    //this increments time based on if the window is active or not
    for(int i = 1; i < numWindows +1; ++i){
        if(window.atWindow == true){
            windowArray[i].timeInt();
        }
        //the time starts when the windows are created
      }
      //if this window is occuppied 
    if(window.satis == true){
        while(studentQueue.getSize() != 0){
            //the student object is created for the students in the queue
            window.receiveStudents(studentQueue.remove());
        }
        
    }
        //this makes the student objects 
        mStudents();  
        //this increments the time for the entire program
        time++;  
}

void Registrar::mStudents(){
    //if the time of the simulation matches with the time in the queue
    //then the following operations will perform
    if(time == fCheck->fileQueue->peek()){
        //the time for the program is created
        int currTime = fCheck->fileQueue->remove();
        //the students based on the time has been placed in a temp variable
        int currStudents = fCheck->fileQueue->remove();
        // for how many students there are in the designated current time
        //thats how many student objects are created
        for(int i = 0; i < currStudents; ++i){
            int plugStudents = fCheck->fileQueue->remove();
            Student* student = new Student(plugStudents);
            //these students are inserted in a student queue
            studentQueue.insert(student);
            } 
            cout<<"\n"<<endl;
    }
}

void Registrar::mWindows(){   
    //the window array is created based on the number provided in the file
    windowArray = new Window[numWindows];
}