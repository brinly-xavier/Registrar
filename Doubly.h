/*
Brinly Xavier
2316142
xavier@chapman.edu
CPSC 350 -01
Registrar Assignment: 04
*/
#pragma once
 #include <iostream>
 #include<string>
 #include "ListNode.h"
 using namespace std;

  //DoublyLinkedList

  template <class T>
  class DoublyLinkedList{
    public:
        ListNode<T> *front;
        ListNode<T> *back;
        unsigned int size;
         
        DoublyLinkedList();
        ~DoublyLinkedList();

        void insertFront(T d);
        void insertBack(T d);

        T remove(T d);
        T removeFront();
        T removeBack();
        T deletePos(int pos); //AKA removeAt()
        int find(T d);

        bool isEmpty();
        void printList();
        int getSize();
};

        template <class T> 
        DoublyLinkedList<T>::DoublyLinkedList(){
            size = 0;
            front = NULL;
            back = NULL;
        }

        template <class T>
        DoublyLinkedList<T>::~DoublyLinkedList(){
            ListNode<T>* curr = front;
            ListNode<T>* prev = front;

            while(curr != NULL){
                prev = curr;
                curr = curr ->next;
                prev = NULL;
            }

        }

        template <class T>
        void DoublyLinkedList<T>::insertFront(T d){
            ListNode<T>  *node = new ListNode<T>(d);
            if(size == 0)//empty List
            {
                back = node;
            }else{
            //not an empty List
                front->prev = node;
                node->next = front;
                
            }
            front = node;
            size++;

        }
        template <class T>
        T DoublyLinkedList<T>::removeFront(){
            //check if empty before attempting to remove
            ListNode<T> *ft = front;
            if(size == 1) //front == back or front->next == nullptr
            {
            //its the node in the List
                back = NULL;
            }
            else
            {
            //we have more than one element in the List
                front->next->prev = NULL;
            }
            front = front->next;
            T tmp = ft ->data;
            ft->next = NULL;
            delete ft;
            size--;
            return tmp;
        }
        
        template <class T>
        void DoublyLinkedList<T>::insertBack(T d){
            
            ListNode<T>  *node = new ListNode<T>(d);
           // cout<<"the size is: "<<size<<endl;
            if(isEmpty())//empty List
            {
            //we have an empty list
               
                front = node;    
            }
            else
            {
            //not an empty List
                //cout << "THe list is not empty\n";
                back->next = node;
                node->prev = back;
            }


            back = node;
            size++;
        }
        template <class T>
        T DoublyLinkedList<T>::removeBack(){
            ListNode<T>* backTemp = back;
            if(isEmpty())
            {
                //throw runtime_error("The list is empty");
            }
            if(size == 1){
                back = NULL;
            }
            else
            {
                back->prev->next = NULL;
            }
            back = back->prev;
            T tmp = backTemp->data;
            backTemp->prev = NULL;
            delete backTemp;
            size--;
            return tmp;
            
        }
        template <class T>
        T DoublyLinkedList<T>::deletePos(int pos) //aka int key
        {
            int index = 0;
            ListNode<T>* curr = front;
            ListNode<T>* prev = front;

            while(index != pos)
            {
                prev = curr;
                curr = curr->next;
                index++;
            }

        }
        template <class T>
        bool DoublyLinkedList<T>::isEmpty() //aka int key
        {
            if(size == 0){
                return true;
            }    
            return false;
        }

        template <class T>
        T DoublyLinkedList<T>::remove(T d) //aka int key
        {
            //check if list is not empty before attempting to remove
            ListNode<T> *curr = front;
            while(curr->data != d)
            {
                curr = curr->next;
                if(curr == NULL)//we did not find the value/ListNode
                return NULL;
            }
            //if we get to this point it means we found it
            //lets check if the node is the insert
            if(curr ==front)
            {
                front = curr->next;
            }
            else if(curr == back)
            {
                //its not the front
                curr->prev->next = curr->next;
                back = curr->prev;
            }
            else
            {
                //its not the insertBack
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
            }
            curr->next = NULL;
            curr->prev = NULL;
            size--;
            return curr;
        }
        template <class T>
        int DoublyLinkedList<T>::find(T d) //aka int key
        {
            int index = 0;
            ListNode<T> curr = front;
            while(curr != NULL){
                if(curr->data == d){
                    break;
                }
                index++;
                curr = curr->next;
            }
            if(curr = NULL){
                index = -1;
            }
            return index;

        }
        template <class T>
        int DoublyLinkedList<T>::getSize() //aka int key
        {
            return size;
        }

  



