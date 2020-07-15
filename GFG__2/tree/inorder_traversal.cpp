#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *left;
	node *right;
	node(int d)
	{
		this->data = d;
		left = NULL;
		right = NULL;
	}
};

void inorder(node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		cout << root->data << " ";
		inorder(root -> right);
	}
}

int main()
{
	node *root = new node(10);
	node *left = new node(20);
	node *right = new node(30);
	root->left = left;
	root -> right = right;
	inorder(root);
	return 0;
}