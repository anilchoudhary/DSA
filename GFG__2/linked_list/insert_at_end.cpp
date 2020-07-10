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

int main()
{
	// node *head = new node(1);
	// node *temp = new node(2);
	// node *temp2 = new node(3);
	// head->next = temp;
	// temp->next  = temp2;
	node* head = NULL;
	head = insert_end( head , 4);
	insert_end( head , 7);
	insert_end( head , 6);
	insert_end( head , 5);
	node *cur = head;
	while (cur)
	{
		cout << cur->data << " ";
		cur = cur->next;
	}
	cout << endl;
	return 0;
}


