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
	data.insert(int val, int k);
 }

void Stack::pop()
{
	data.remove(int k);
}
	
int Stack::top()
{
	data.get(int k);	
}
	
void Stack::clear()
{
	data.clear();
}
