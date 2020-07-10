#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
	node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

node* insert_end(node *head, int d)
{
	node* temp = new node(d);

	if (head == NULL)
		return temp;
	node* cur = head;
	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = temp;
	return head;
}

void print(node *head)
{
	node *cur = head;
	while (cur)
	{
		cout << cur->data << " ";
		cur = cur->next;
	}
	cout << endl;
}

node* delete_begin(node *head)
{
	if (!head)
		return NULL;

	node* temp = head->next;
	free(head);

	return temp;
}

node* delete_end(node *head)
{
	if (!head)
		return NULL;

	node * cur = head;
	while (cur->next->next)
	{
		cur = cur->next;
	}
	node* temp = cur->next;
	cur->next = NULL;
	free(temp);
	return head;
}

int main()
{
	node* head = NULL;
	head = insert_end( head , 4);
	insert_end( head , 7);
	insert_end( head , 6);
	insert_end( head , 5);
	print(head);
	delete_end(head);
	print(head);
	return 0;
}


