
#include <iostream>
#include "LinkedList.h"
#include "node.h"
using namespace std;

int main()
{
	cout << "Welcome to the Linked Lists\n";
	LinkedList list;

	for (int i = 0; i < 100; i++)
	{
		list.insert(rand() % 100);
	}

	list.display();
}

