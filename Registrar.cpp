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

Registrar::Registrar(string fileLocation){
    fCheck = new Inputer(fileLocation);
    numWindows = fCheck->fileQueue->remove();
    cout<<"Number of Windows Open: "<<numWindows<<endl;
    mWindows();
    //SocialConstruct();
}
void Registrar::SocialConstruct(){
    for(int i = 1; i < numWindows +1; ++i){
        //cout<<"aple"<<endl;
        cout<<"WIndow: " << i<<endl;
        windowArray[i].timeInt();
       // cout<<i<<endl;
        
      }
    if(window.satis == true){
        while(studentQueue.getSize() != 0){
            //cout<<"apl2e"<<endl;
            window.receiveStudents(studentQueue.remove());
        }
        
    }
    //if(window.satis == false){
      //  while(studentQueue.getSize() != 0){
        //    cout<<"apl2e"<<endl;
            //window.notOccupied();
        //}
        
    //}
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