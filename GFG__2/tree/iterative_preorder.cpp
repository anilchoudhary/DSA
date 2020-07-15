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