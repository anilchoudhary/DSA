#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
	node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

int search(node *head, int x)
{
	static int i = 0;
	if (!head)
		return -1;
	++i;
	if (head->data == x)
		return i;
	return search(head->next, x);
}

int main()
{
	node *head = new node(1);
	node *temp = new node(2);
	node *temp2 = new node(3);
	head->next = temp;
	temp->next  = temp2;
	cout << search(head, 2) << endl;
	return 0;
}


