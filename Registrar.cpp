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
    for(int i = 1; i < numWindows +1; ++i){
        if(window.atWindow == true){
            windowArray[i].timeInt();
        }
        //the time starts when the windows are created
        
      }
    if(window.satis == true){
        while(studentQueue.getSize() != 0){
            //the student object is created for the students in the queue
            window.receiveStudents(studentQueue.remove());
        }
        
    }
        cout<<"The current time is: "<<time<<endl;
        mStudents();  
        time++;  
}

void Registrar::mStudents(){
    
    if(time == fCheck->fileQueue->peek()){
        int currTime = fCheck->fileQueue->remove();
        cout<<"the time is"<<currTime<<endl;
        int currStudents = fCheck->fileQueue->remove();
        for(int i = 0; i < currStudents; ++i){
            int plugStudents = fCheck->fileQueue->remove();
            Student* student = new Student(plugStudents);
            studentQueue.insert(student);
            cout<<"How long you gonna spend at the window: "<<plugStudents<<endl;
            } 
            cout<<"\n"<<endl;
    }
}

void Registrar::mWindows(){   
    windowArray = new Window[numWindows];
}