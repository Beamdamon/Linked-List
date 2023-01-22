
#include <iostream>
#include "LinkedList.h"
#include "node.h"

using namespace std;

int main()
{
	std::cout << "Welcome to the Linked Lists\n";
	LinkedList list;

	int choice;
	int num1;
	bool exit = false;

	// Main display for the linked list
	while (!exit)
	{
		std::cout << "Menu" << endl;
		std::cout << "1 = display " << endl;
		std::cout << "2 = Insert " << endl;
		std::cout << "3 = Get Length " << endl;
		std::cout << "4 = Delete " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			list.display();
			break;
		}
		case 2:
		{
			for (int i = 0; i < 100; i++)
			{
				list.insert(i);
			}
			break;
		}
		case 3:
		{
			int len = list.getLength();
			std::cout << "# of nodes = " << len << endl;
			break;
		}
		case 4:
		{
			Node* root = new Node(1);
			root->previous = new Node(2);
			root->next = new Node(3);
			root->previous->previous = new Node(4);
			root->previous->next = new Node(5);

			list.deleteTree(root);
			root = NULL;

			cout << "\n Tree deleted ";

			return 0;
		}
		default:
		{
			std::cout << "Invalid input" << endl;
		}
		}
	}
}

