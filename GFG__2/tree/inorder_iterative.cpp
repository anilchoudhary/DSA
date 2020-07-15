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
	stack<node *> st;
	node *cur = root;
	while (cur != NULL || st.empty() == false)
	{
		while (cur != NULL)
		{
			st.push(cur);
			cur = cur -> left;
		}
		cur = st.top();
		st.pop();
		cout << cur -> data << " ";
		cur = cur -> right;
	}
}

int main()
{
	node *root = new node(10);
	node *left = new node(20);
	node *right = new node(30);
	root -> left = left;
	root -> right = right;
	iterative_inorder(root);
	return 0;

}