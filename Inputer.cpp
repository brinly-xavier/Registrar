/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/
#include "Inputer.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fileLoc;
//constructor

Inputer::Inputer(string fileLocation){
    fileQueue = new GenQueue<int>();
    
    //this runs the check based on the file
    fCheck(fileLocation); 
    }

Inputer::~Inputer(){  
    
}

void Inputer::fCheck(string fileLocation){
    //this opens the file
    fileLoc.open(fileLocation);
    if (fileLoc.is_open())
    {
        cout<< "File successfully open\n"<<endl;
    }
    else
    {
        throw runtime_error("The file you entered could not be opened. Try again Later.");
    }
    string line;
    //this while loops adds all the variables to the list
    while(getline(fileLoc, line)){
        fileQueue->insert(stoi(line));
    }
    cout<<"gen wubew : "<<fileQueue->peek()<<endl;
    cout<<"\n"<<endl;
    fileLoc.close();  

}