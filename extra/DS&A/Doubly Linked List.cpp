#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
	node* prev;
};

node* head = NULL;

void insert_begin(int d)
{
	node* new_node = new node;
	new_node -> data = d;
	new_node -> next = head;
	new_node -> prev = NULL;
	
	if(head != NULL)
	{
		head -> prev = new_node;
	}
	head = new_node;
}

void insert_end(int d)
{
	node* new_node = new node;
	new_node -> data = d;
	new_node -> next = NULL;
	new_node -> prev = NULL;
	
	if(head==NULL)
	{
		head = new_node;
	}
	else
	{
		node* t = head;
		while(t->next!=NULL)
		{
			t= t->next;
		}
		new_node -> prev = t;
		t -> next = new_node;
	}
}

void deletee_begin()
{
	if(head==NULL)
	{
		cout<<"List is empty.";
	}
	else
	{
		node* tmp = head;
		head = head->next;
		head -> prev = NULL;
		cout<<"Element deleted:"<<tmp->data<<endl;
		free(tmp);
	}
}

void deletee_end()
{
	if(head==NULL)
	cout<<"List is empty.";
	else
	{
		node* t = head;
		while(t->next->next!=NULL)
		{
			t = t->next;
		}
		
		node* tmp = t->next;
		t -> next = NULL;
		cout<<"Element deleted:"<<tmp->data<<endl;
		free(tmp);
	}
}

void print()
{
	if(head==NULL)
	cout<<"List is empty.";
	else
	{
		node* t = head;
		while(t!=NULL)
		{
			cout<<t->data<<" ";
			t=t->next;
		}
		cout<<endl;
	}
}


int main()
{
	insert_begin(1);
	insert_begin(2);
	insert_begin(3);
	print();
	insert_end(4);
	insert_end(5);
	print();
	deletee_begin();
	print();
	insert_begin(6);
	insert_end(7);
	print();
	deletee_end();
	print();
	insert_begin(8);
	insert_end(9);
	print();
	return 0;
}
