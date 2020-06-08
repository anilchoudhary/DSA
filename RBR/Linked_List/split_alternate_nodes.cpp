#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct LinkedList {
	Node* head;
	LinkedList()
	{
		head = NULL;
	}

	void print(Node *itr)
	{
		if (!itr) {
			itr = head;
		}
		struct Node* temp = itr;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data)
	{
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}

	void split_alternate_nodes(Node **head1, Node **head2)
	{
		if (!head || !head->next)
			cout << "can't split";
		*head1 = head;
		*head2 = head->next;
		Node *h = head;
		Node *temp = head;
		while (h)
		{
			temp = h -> next;
			h -> next = temp ? temp->next : temp;
			h = temp;
		}
	}

};

int main()
{
	LinkedList ll;
	ll.push(4);
	ll.push(3);
	ll.push(2);
	ll.push(1);
	ll.push(5);

	cout << "Given linked list\n";
	ll.print(NULL);

	Node *head1 = NULL;
	Node *head2 = NULL;
	ll.split_alternate_nodes(&head1, &head2);

	cout << "\nSplited Linked list \n";
	ll.print(head1);
	cout << endl;
	ll.print(head2);
	return 0;
}

