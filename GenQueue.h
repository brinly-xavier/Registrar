/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/

#pragma once

#include "Doubly.h"
#include <iostream>
using namespace std;

template <class T>
class GenQueue
{
  public:
    GenQueue();//default constructor
    //GenQueue();//overloaded constructor
    ~GenQueue();

    //core function
    void insert(T d);
    int getSize();
    T remove();

    //aux functions
    T peek();
    bool isFull();
    bool isEmpty();
    
    DoublyLinkedList <T> *myQueue;
};
   
template <class T>
GenQueue<T>::GenQueue(){
  //default constructor
  myQueue = new DoublyLinkedList<T>();
}
//overloaded
/*emplate <class queTemp>
GenQueue<queTemp>::GenQueue(int maxSize){
  myQueue = new queTemp[maxSize];
  size = maxSize;
  front = 0;
  rear = -1;
  numElements = 0;
}
*/
  template <class T>
  GenQueue<T>::~GenQueue(){
    delete myQueue;
  }

  template <class T>
  void GenQueue<T>:: insert(T d){
    //add error checking
    myQueue->insertBack(d);
    //cout<<"enw"<<d<<endl;
  }
  template <class T>
  T GenQueue<T>::remove(){
    return myQueue ->removeFront();
    
  }
  template <class T>
  T GenQueue<T>::peek(){
    return myQueue->front->data;
  }
  template <class T>
  bool GenQueue<T>::isFull(){
    return myQueue -> isFull();
  }
  template <class T>
  bool GenQueue<T>::isEmpty(){
    return myQueue -> isEmpty();
  }
  template <class T>
  int GenQueue<T>::getSize(){
    return myQueue -> getSize();
  }



