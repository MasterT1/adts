#include "StackLL.h"
#include "List.h"
#include "List.cpp"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;


int Stack::size()
 {	
	cout << data.size() << endl;
    return data.size();
 }

void Stack::push(int val)
{	
	data.insert(val, 1);
	
 }

void Stack::pop()
{
	data.remove(1);
}
	
int Stack::top()
{
	data.get(1);	
}
	
void Stack::clear()
{
	data.clear();
}

Stack::~Stack()
{
	data.~List();	
}
