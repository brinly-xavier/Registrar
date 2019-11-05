/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/

#include <iostream>
#include "Inputer.h"
#include "Student.h"
#include "GenQueue.h"
#include "Registrar.h"

using namespace std;

float mean;
float median;
float big;
int overTen;
float idle;
float longIdle;
int overFive;
string fileLocation;

int main(int argc, char ** argv){
    //this takes the filename as a command line argument
    fileLocation = argv[1];  
    try{
      Inputer inp(fileLocation);
      Registrar registrar = Registrar (fileLocation);
      Student student = Student(2);
      cout<<"All of the syntax is good."<<endl;
   }
    catch(runtime_error e){
      //this runtime error ends the program once the first error is detected
      cout<<e.what()<<endl;
      cout<<"Goodbye!\n"<<endl;
      return 0;
   }
    cout<<"The mean student wait time: "<<mean<<endl;
    cout<<"The median student wait time: "<<median<<endl;
    cout<<"The longest student wait time: "<<big<<endl;
    cout<<"The number of students waiting over 10 minutes: "<<overTen<<endl;
    cout<<"The mean window idle time: "<<idle<<endl;
    cout<<"The longest window idle time: "<<longIdle<<endl;
    cout<<"Number of windows idle for over 5 minutes: "<<overFive<<endl;
}