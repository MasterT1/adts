#include "StackV.h"
#include "List.h"
#include "List.cpp"

#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;


int Stack::size()
{	
	for(int i=0; i < data.size(); i++)
	{
		return data[i].size();
	}
}

void Stack::push(int val)
{	
	for(int i=0; i < data.size(); i++)
	{
		data[i].insert(val, 1);
	}
	
}

void Stack::pop()
{
	for(int i=0; i < data.size(); i++)
	{
		data[i].remove(1);
	}
}
	
int Stack::top()
{
	for(int i=0; i < data.size(); i++)
	{
		data[i].get(1);	
	}
}
	
void Stack::clear()
{
	for(int i=0; i < data.size(); i++)
	{
		data[i].clear();
	}
}
