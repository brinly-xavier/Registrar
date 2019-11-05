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

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Registrar::Registrar(string fileLocation){
    fCheck = new Inputer(fileLocation);
    int numWindows = fCheck->fileQueue->remove();
    cout<<"Number of Windows Open: "<<numWindows<<endl;
    mWindows();
    mStudents();
    SocialConstruct();
}
void Registrar::SocialConstruct(){
    time++;
    //cout<<"The current time is: "<<time<<endl;
    mStudents();
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
    
    Window* windowArray = new Window[openWindow];
}