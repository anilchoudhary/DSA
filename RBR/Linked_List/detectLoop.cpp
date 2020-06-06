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

	void detectLoop()
	{
		Node *slow, *fast;
		slow = fast = head;
		for (; slow && fast && fast -> next ;)
		{
			slow = slow -> next;
			fast = fast -> next -> next;
			if (slow == fast)
			{
				cout << "loop detected.";
				return;
			}
		}
		cout << "NO loop.";
		return ;
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
	cout << endl;
	ll.detectLoop();

	return 0;
}
