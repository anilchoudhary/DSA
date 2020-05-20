#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
};

node* head = NULL;

void enqueue(int d)
{
	node* new_node = new node;
	new_node -> data = d;
	new_node -> next = NULL;
	if(head==NULL)
	{
		head = new_node;
	}
	else
	{
		node* t = head;
		while(t->next!=NULL)
		{
			t = t->next;
		}
		t ->next = new_node;
	}
}

void dequeue()
{
	if(head == NULL)
	cout<<"List is empty."<<endl;
	else
	{
		node* tmp = head;
		cout<<"Element removed from queue is: "<<tmp->data<<endl;
		head = tmp->next;
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
	enqueue(1);
	enqueue(2);
	enqueue(3);
	print();
	dequeue();
	print();
	return 0;
}
