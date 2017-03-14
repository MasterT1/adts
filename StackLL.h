//With a (raw) linked-list 

#ifndef STACK_H
#define STACK_H


#include "List.h"

class Stack
{
private:

   class Node;

   Node* frontPtr = nullptr;
   int num_elements = 0;
   
   //List data;   

public:

    // No default c'tor needs to be declared 
    // We initialized the attributes above

   ~Stack(); //d'tor

   int size();

   void push(int val);

   void pop();

   int top();

   void clear();

};

#endif
