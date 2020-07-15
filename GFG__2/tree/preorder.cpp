#include<bits/stdc++.h>
uisng namespace std;

void preorder(node *root)
{
	if (root != NULL)
	{
		cout << root->data << " ";
		preorder(root->left);
		preorder(root->right);
	}
}

int main()
{
	node *root = new node(10);
	node *left = new node(20);
	node *right = new node(30);
	root -> left = left;
	root -> right = right;
	preorder(root);
	return 0;

}