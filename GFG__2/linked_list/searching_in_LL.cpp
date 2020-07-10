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
	int i = 0;
	while (head)
	{
		++i;
		if (head->data == x)
			return i;
		head = head->next;
	}
	return -1;
}

int main()
{
	node *head = new node(1);
	node *temp = new node(2);
	node *temp2 = new node(3);
	head->next = temp;
	temp->next  = temp2;
	cout << search(head, 4) << endl;
	return 0;
}


