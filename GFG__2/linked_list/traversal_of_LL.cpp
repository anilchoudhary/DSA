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

void print(node* head)
{
	node* temp = head;
	while (temp)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

int main()
{
	node *head = new node(1);
	node *temp = new node(2);
	node *temp2 = new node(3);
	head->next = temp;
	temp->next  = temp2;
	print(head);
	return 0;
}


