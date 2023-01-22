#include "LinkedList.h"
#include <iostream>
#include "node.h"

LinkedList::LinkedList() 
{
	length = 0;
	head = NULL;
}

void LinkedList::insert(int num)
{
	Node* node = new Node();
	node->data = num;
	node->next = head;
	head = node;
	length++;
}

void LinkedList::display() 
{
	Node* curr = this->head;
	int i = 1;
	while (curr)
	{
		std::cout << "node value = " << i << curr->data;
	}

}