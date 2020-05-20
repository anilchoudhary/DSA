#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *left,*right;
};

node *create_node(int d)
{
	node *temp = new node;
	temp -> data = d;
	temp -> left = NULL;
	temp -> right = NULL;
	return temp;
}

node *insert (node *current,int d)
{
	if(current == NULL)
		return create_node(d);
	else if(current->data<=d)
		current->right = insert(current->right,d);
	else 
		current->left = insert(current->left,d);
}

void inorder(node* current)
{
	if(current!=NULL)
	{
		inorder(current->left);
		cout<<current->data<<" ";
		inorder(current->right);
	}
}

int main()
{
	node* root = NULL;
	root = insert(root,4);
	insert(root,1);
	insert(root,5);
	insert(root,2);
	insert(root,3);
	insert(root,6);
	inorder(root);
}
