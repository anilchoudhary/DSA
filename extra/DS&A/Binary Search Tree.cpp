#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};


node* create_node(int d)
{
		node* new_node = new node;
		new_node -> data = d;
		new_node -> left = NULL;
		new_node -> right = NULL;
		return new_node;
}

node* insert(node* current,int d)
{
	if(current == NULL)
	{
		return create_node(d);
	}
	else if(current->data <= d)
		 current->right = insert(current->right,d);
	else 
		 current->left = insert(current->left,d);	
}

node* find(node* current, int d)
{
	if(current == NULL)
		return NULL;
	if(current -> data == d)
		return current;
	else if(current -> data > d)
		return find(current->left,d);
	else if(current -> data < d)
		return find(current->right, d);
}

node* findMin(node*root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

node *deletee(node *current, int d)
{
	/*if(current==NULL)
		return  current;
	else if(d < current->data)
		current->left = deletee(current->left,d);
	else if(d > current->data)
		current->right = deletee(current->right,d);
	else */
	current = find(current,d);
	{
		if(current->left==NULL && current->right==NULL)
	{
		delete current;
		current = NULL;
		return current;
	}
	else if(current->left==NULL && current->right!=NULL)
	{
		node *temp = current;
		current = current->right;
		delete temp;
		return current;
	}
	else if(current->left!=NULL && current->right==NULL)
	{
		node *temp = current;
		current = current->left;
		delete temp;
		return current;
	}
	else
	{
		node *temp = findMin(current->right);
		current->data = temp -> data;
		current -> right = deletee(current->right,temp->data);
	}
	}
	
}

void in_order(node* current)
{
	if(current != NULL) 
	{
		in_order(current->left);
		cout<<current->data<<" ";
		in_order(current->right);
	}
}

int main()
{
	node* tree = NULL;
	tree = insert(tree,4);
	 insert(tree,5);
	 insert(tree,1);
	 insert(tree,2);
	in_order(tree);
	cout<<endl;
	tree = deletee(tree,4);
	in_order(tree);
	return 0;
}
