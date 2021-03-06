#include "StackV.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;


int Stack::size()
 {	
    return data.size();
 }

void Stack::push(int val)
{
	data.push_back(val);
}

void Stack::pop()
{
	data.pop_back();
}
	
int Stack::top()
{
	return data[data.size()-1];	
}
	
void Stack::clear()
{
	while( data.size() <= 0)
	{
		data.clear();
	}
}

