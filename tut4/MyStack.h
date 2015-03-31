/*
My Stack Class Declaration
*/
#include <iostream>
#include <Windows.h>

using namespace std;

#ifndef MYSTACK_H
#define MYSTACK_H

class MyStack
{
private:

	struct node
	{
		int number;
		struct node *prev;
	}; struct node *tail = NULL, *curr;

public:

	
	void push(int);
	void pop();
	void peek();
	bool isEmpty();
	bool isFull(int);

};
#endif