
#include <iostream>
#include <Windows.h>

#include "MyStack.h"

using namespace std;

int main()
{
	MyStack stack;
	int number, max;

	
	cout << endl << " Max: ";
	cin >> max;

	cout << endl << " Number(s):" << endl;

	while (max != 0)
	{
		cout << " ";
		cin >> number;
		if (number = 0)
		{
			stack.push(NULL);
		}
		else
		{
			stack.push(number);
		}
		max--;

	}

	
	cout << endl << " --------------" << endl << " Popping" << endl;
	stack.pop();

	if (stack.isEmpty() == true)
		cout << " --------------" << endl << " Stack Is Empty!" << endl;

	if (stack.isFull(max) == true)
		cout << " --------------" << endl << " Stack Is Full." << endl;
	cout << " --------------" << endl << endl;
	cout << " Peeking" << endl;
	stack.peek();


	system("pause");
	return 0;
}