#include <iostream>
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

	int middle()
	{
		Node *slow, *fast;
		slow = head;
		fast = head;
		while ( fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow->data;
	}

	void print()
	{
		struct Node* temp = head;
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
};

int main()
{
	LinkedList ll;
	ll.push(5);
	ll.push(4);
	ll.push(3);
	ll.push(2);
	ll.push(1);

	cout << "Given linked list\n";
	ll.print();
	cout << endl << "Middle element of linked list: " << ll.middle();

	return 0;
}
