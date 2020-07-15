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

int total(node *root)
{
	if (root == NULL)
		return 0;
	else
		return (1 + total(root->left) + total(root -> right));
}


int getHeight(node *root)
{
	if (root == NULL)
		return 0;
	else
		return max(1 + getHeight(root->left), 1 + getHeight(root->right));
}

int main()
{
	node *root = new node(10);
	node *left = new node(20);
	node *right = new node(30);
	root -> left = left;
	root -> right = right;
	cout << getHeight(root) << endl;;
	return 0;

}