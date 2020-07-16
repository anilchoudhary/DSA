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

void iterative_inorder(node *root)
{
	if (root == NULL) return ;
	stack<node *> st;
	st.push(root);
	while (st.empty() == false)
	{
		node *cur = st.top();
		cout << cur->data << " ";
		st.pop();
		if (cur -> right != NULL) st.push(cur -> right);
		if (cur -> left != NULL) st.push(cur -> left);
	}
}

bool search(node *root , int x)
{
	if (root == NULL)
		return 0;
	else if (root -> data == x)
		return 1;
	else if (root -> data > x)
		return search(root -> left, x);
	else
		return search(root -> right, x);
}

node *insert(node *root, int d)
{
	if (root == NULL)
		return new node(d);
	else if (root -> data < d)
		root -> right = insert(root -> right , d);
	else if (root->data > d)
		root -> left = insert(root->left, d);
	return root;
}

node *iterative_insert(node *root, int d)
{
	node *temp = new node(d);
	node *parent = NULL, *cur = root;
	while (cur)
	{
		parent = cur;
		if (cur -> data > d)
			cur = cur -> left;
		else if (cur -> data < d)
			cur = cur -> right;
		else
			return root;
	}
	if (parent == NULL)
		return temp;
	if (parent -> data > d)
		parent -> left = temp;
	else
		parent -> right = temp;
	return root;
}

int main()
{
	node *root = new node(20);
	node *left = new node(10);
	node *right = new node(30);
	root -> left = left;
	root -> right = right;
	root = iterative_insert(root , 40);
	iterative_insert(root, 0);
	// if (search(root, 340))
	// 	cout << "found" << endl;
	// else
	// 	cout << "not found" << endl;
	iterative_inorder(root);
	return 0;

}