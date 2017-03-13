#include "StackV.h"
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
	
	
	//cout << val << endl;
	/*for(int i = 0; i < data.size(); i++)
	{
		data[i].insert(val, 1);
	}*/
 }

void Stack::pop()
{
	
	List data;
	data.remove(1);
	for(int i=0; i < data.size(); i--)
	{
		//data[i].remove(1);
	}
}
	
int Stack::top()
{
	for(int i=0; i < data.size(); i++)
	{
		//data[i].get(1);	
	}
}
	
void Stack::clear()
{
	data.clear();
}
	
//for(int i=0; i < data.size(); i++)

