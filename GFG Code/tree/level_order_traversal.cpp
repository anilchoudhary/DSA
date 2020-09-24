#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
	node(int x)
	{
		data = x;
		left = right = NULL;
	}
};

void lot(node* root)
{
	queue<node*> q;
	q.push(root);
	while (q.empty() == false)
	{
		node* cur = q.front();
		q.pop();
		cout << cur->data << " ";
		if (cur->left != NULL)
			q.push(cur->left);
		if (cur->right != NULL)
			q.push(cur->right);
	}
}

int main()
{
	node* root = new node(20);
	node* temp = new node(10);
	root -> left = temp;
	node* temp2 = new node(25);
	root -> right = temp2;
	lot(root);
	return 0;
}