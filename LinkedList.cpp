#include "LinkedList.h"
#include <iostream>
#include "node.h"

using namespace std;

LinkedList::LinkedList() 
{
	length = 0;
	head = NULL;
}

void LinkedList::insert(int num1)
{
	Node* node = new Node();
	node->data = num1;
	node->next = head;
	head = node;
	head->previous = node;
	length++;
}

void LinkedList::deletion(int num1)
{
	Node* curr = this->head;

	if (curr->data = num1)
	{
		curr->previous = curr->next;
	}
	else
	{
		curr = curr->next;
	}
}

void LinkedList::display() 
{
	Node* curr = this->head;
	int i = 1;
	while (curr)
	{
		cout << "node value = " << curr->data;
		curr = curr->next;
		i++;
	}

}
int LinkedList::getLength()
{
	return length;
}