/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/
#pragma once

template <class T>

class ListNode{
    public:
      T data;
      ListNode<T> *next;
      ListNode<T> *prev;

      //constructor/destructor
      ListNode();
      ListNode(T d);
      ~ListNode();
  
};

template <class T>
ListNode<T>::ListNode(T d){
    data = d;
    next = NULL;
    prev = NULL;
  }
  template <class T>
  ListNode<T>::~ListNode(){
    next = NULL;
    prev = NULL;
  }