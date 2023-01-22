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
	void deletion(int data);
	void display();
	int getLength();
};
