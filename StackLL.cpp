#include "StackLL.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;

int Stack::size()
 {
	num_elements = data.size(); 
    return num_elements;
 }

void Stack::push(int val, int num_elements)
{
	for(int i = 1; i < num_elements-1; i++)
	{
		data.insert(val, i);
	}
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
