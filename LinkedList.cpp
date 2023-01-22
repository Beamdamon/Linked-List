#include "LinkedList.h"
#include <iostream>
#include "node.h"

using namespace std;

LinkedList::LinkedList() 
{
	length = 0;
	head = NULL;
}

//Inserting the Linked List
void LinkedList::insert(int num1)
{
	Node* node = new Node(num1);
	node->data = num1;
	node->next = head;
	head = node;
	head->previous = node;
	length++;
}

//Deleting the Linked List
void LinkedList::deleteTree(Node* node)
{
	if (node == NULL) return;

	deleteTree(node->previous);
	deleteTree(node->next);

	cout << "Deleting node: " << node->data;
	delete node;

}

//Displaying the Linked List
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

//Gives the length of the Linked List
int LinkedList::getLength()
{
	return length;
}