
#include "MyStack.h"


void MyStack::push(int val)
{

	curr = (struct node *)malloc(sizeof(struct node));
	curr->number = val;

	if (tail == NULL)
	{
		curr->prev = NULL;
	}
	else
	{
		curr->prev = tail;
	}
	tail = curr;

}
void MyStack::pop()
{

	while (curr)
	{
		cout << " " << curr->number << endl;
		Sleep(70);
		curr = curr->prev;
	}

}
void MyStack::peek()
{


}
bool MyStack::isEmpty()
{

	if (tail == NULL)
		return true;

}
bool MyStack::isFull(int ful)
{

	int i = 0;
	while (curr)
	{
		curr = curr->prev;
		i++;
	}

	if (i == ful)
		return true;

}