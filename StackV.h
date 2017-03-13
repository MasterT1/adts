//Implementing a Stack ADT with a vector

#ifndef STACK_H
#define STACK_H

#include <vector>
#include "List.h"

using namespace std;

class Stack
{
private:        
      
      //List data;  
      vector<int> data;
      data.push_back(val);      
	 	
public:

    // No default c'tor needs to be declared 
    // The vector "knows" how to initialize itself


   // No d'tor needs to be declared
   // The vector "knows" how to destroy itself

   int size();

   void push(int val);

   void pop();

   int top();

   void clear();

};

#endif
