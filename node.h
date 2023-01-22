#pragma once
#include<iostream>

class Node
{

    public:
	int data;
	Node* next;
	Node* previous;

    Node(int data)
    {
        this->data = data;
        this->previous = NULL;
        this->next = NULL;
    }
};
