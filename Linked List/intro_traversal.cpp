// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	// Travesral and Printing the the linked list
	void printList(Node *n)
	{
		while (n != NULL)
		{
			cout << n->data << "--> ";
			n = n->next;
		}
		cout << "Null";
	}
}; 
int main()
{
	// allocate 3 nodes in the heap
	Node *head = new Node();
	Node *second = new Node();
	Node *third = new Node();

	head->data = 10;	 // assign data in first node
	head->next = second; // Link first node with second

	second->data = 20;	  // assign data to second node
	second->next = third; // Link first node with second

	third->data = 30; // assign data to third node
	third->next = NULL;

	// Making object for class Node
	Node n;
	n.printList(head); // Calling function

	return 0;
}
