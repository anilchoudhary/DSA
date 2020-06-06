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

	void KthNodeFromEnd(int k)
	{
		Node *p, *q;
		p = q = head;
		for (int i = 1; i < k && p; i++)
			p = p -> next;
		if (p == NULL)
			cout << "nothing here.";
		while (p-> next)
		{
			q = q->next;
			p = p->next;
		}
		cout << "here is our data " << q -> data;
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

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outpu.txt", "w", stdout);
#endif

	LinkedList ll;
	ll.push(51);
	ll.push(43);
	ll.push(37);
	ll.push(32);
	ll.push(19);

	cout << "Given linked list\n";
	ll.print();
	int k;
	cin >> k;
	cout << endl;
	ll.KthNodeFromEnd(k);

	return 0;
}
