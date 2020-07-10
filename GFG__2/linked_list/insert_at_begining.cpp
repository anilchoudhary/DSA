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

void insert_begin(node **head, int d)
{
	node* tmp = new node(d);

	// tmp->data = d;
	tmp->next = *head;

	*head = tmp;
	return;

}

int main()
{
	node *head = new node(1);
	node *temp = new node(2);
	node *temp2 = new node(3);
	head->next = temp;
	temp->next  = temp2;
	insert_begin( &head , 4);
	insert_begin( &head , 7);
	insert_begin( &head , 6);
	insert_begin( &head , 5);
	node *cur = head;
	while (cur)
	{
		cout << cur->data << " ";
		cur = cur->next;
	}
	cout << endl;
	return 0;
}


