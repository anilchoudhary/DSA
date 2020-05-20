#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
};

node* head = NULL;

void push(int d)
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

void pop()
{
	if(head==NULL)
	cout<<"Stack is empty."<<endl;
	else
	{
	node* t = head;
	while(t->next->next != NULL)
	{
		t = t->next;
	}
	node* tmp = t -> next;
	cout<<"Element popped:"<<tmp -> data<<endl;
	t -> next = NULL;
	free(tmp);
	}
}

void print_stack()
{
	node* t = head;
	while(t != NULL)
	{
		cout<<t->data<<" ";
		t = t->next;
	}	
	cout<<endl;
}

void print_top()
{
	node* t = head;
	while(t->next!=NULL)
		t=t->next;
	cout<<"Top element is: "<<t->data<<endl;
}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	print_top();
	print_stack();
	pop();
	pop();
	print_top();
	print_stack();
	return 0;
	
}
