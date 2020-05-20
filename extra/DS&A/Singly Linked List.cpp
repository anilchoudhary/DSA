#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
};

node* head = NULL;
	
void insert_end(int d)
{
	node* new_node = new node;
	new_node -> data = d;
	new_node -> next = 	NULL;
	if(head == NULL)
	{
		head = new_node;
	}
	else
	{
		node* t = head;
		while(t -> next != NULL)
		{
			t = t -> next;
		}
		t -> next = new_node;
	}
}

void insert_begin(int d)
{
	node* new_node = new node;
	new_node -> data = d;
	new_node -> next = head;
	
	head = new_node;
}

void deletee_end()
{
	if(head==NULL)
	cout<<"List is empty."<<endl;
	else
	{
	node* t = head;
	while(t->next->next != NULL)
	{
		t = t->next;
	}
	node* tmp = t -> next;
	cout<<"Element deleted:"<<tmp -> data<<endl;
	t -> next = NULL;
	free(tmp);
	}
}

void deletee_begin()
{
	if(head == NULL)
	cout<<"List is empty."<<endl;
	else
	{
		node* tmp = head;
		head = tmp->next;
		free(tmp);
	}
}


void print()
{
	node* t = head;
	while(t != NULL)
	{
		cout<<t->data<<" ";
		t = t->next;
	}	
	cout<<endl;
}

int main()
{
	insert_end(1);
	insert_end(2);
	insert_end(3);
	print();
	deletee_end();
	print();
	insert_begin(4);
	print();
	insert_begin(5);
	print();
	insert_end(6);
	print();
	deletee_begin();
	print();
	
	return 0;
}

