#include "StackL.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;

int Stack::size()
 {
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
