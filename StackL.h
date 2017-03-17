
//Implementing a Stack ADT With a List ADT

#ifndef STACK_H
#define STACK_H


#include "List.h"

class StackL
{
 private:
  
   List data;
   

public:


// No default c'tor needs to be declared 
// the List "knows" how to initialize itself

// No default d'tor needs to be declared 
// the List "knows" how to destroy itself

  
    void clear();

     void push (int element);//insert element at location k
     void pop();//remove element at location k
     int size();//return the number of elements in the List
     int top ();
    

};

#endif
