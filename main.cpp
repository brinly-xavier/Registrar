/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/

#include <iostream>
#include "Statistics.h"
#include "Inputer.h"
#include "Student.h"
#include "GenQueue.h"
#include "Registrar.h"
#include "Window.h"

using namespace std;


string fileLocation;

int main(int argc, char ** argv){
    //this takes the filename as a command line argument
    fileLocation = argv[1];  

    try{
      //if the file is valid, it will perform all of the duties
      Inputer inp(fileLocation);
      //the registrar class will run based on the file
      Registrar* registrar = new Registrar (fileLocation);
      //this runs through all of the numbers
      for(int i = 0; i < registrar->numWindows-1; ++i)
      {
        //this runs the time count for the program
        registrar->SocialConstruct();
      }
      Statistics stats = Statistics(registrar);
      cout<<"All of the syntax is good."<<endl;
      //calculate the stats
      stats.doTheMath();
   }
    catch(runtime_error e){
      //this runtime error ends the program once the first error is detected
      cout<<e.what()<<endl;
      cout<<"Goodbye!\n"<<endl;
      return 0;
   }
    
}