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

void r_print(node* head)
{
	if (!head)
		return;
	r_print(head->next);
	cout << head->data << " ";
	return;
}

int main()
{
	node *head = new node(1);
	node *temp = new node(2);
	node *temp2 = new node(3);
	head->next = temp;
	temp->next  = temp2;
	r_print(head);
	return 0;
}


