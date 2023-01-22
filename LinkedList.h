#pragma once
#include "node.h"

class LinkedList
{
private:
	int length;
	Node* head;

public:
	LinkedList();
	void insert(int data);
	void deleteTree(Node* node);
	void display();
	int getLength();
};
