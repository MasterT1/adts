#include "StackLL.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;

class Stack::Node //self-referential Node class
{
	public:
	   int data = 0;
	   Node* link = nullptr;	  	
};

int Stack::size()
 {	
    return num_elements;
 }

void Stack::push(int val)
{	
	Node* newPtr = new Node{val};
	newPtr->link = frontPtr;
	frontPtr = newPtr;
	
	num_elements++;
	
 }

void Stack::pop()
{
	Node* delPtr = frontPtr;
	frontPtr = frontPtr->link;
	
	delete delPtr;
	num_elements--;
}
	
int Stack::top()
{	
	return 	frontPtr->data;
}
	
void Stack::clear()
{
	while(size() != 0)
	{
		pop();
	}
}

Stack::~Stack()
{	
    while(num_elements > 0)
    {
		pop();
	}	
}
