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

void mw(node* root)
{
	queue<node*> q;
	q.push(root);
	int ans = 0;
	while (q.empty() == false)
	{
		int count = q.size();
		ans = max(ans, count);
		for (int i = 0; i < count; i++)
		{
			node* cur = q.front();
			q.pop();
			if (cur->left != NULL)
				q.push(cur->left);
			if (cur->right != NULL)
				q.push(cur->right);
		}
	}
	cout << ans << endl;
}

int main()
{
	node* root = new node(20);
	node* temp = new node(10);
	root -> left = temp;
	node* temp2 = new node(25);
	root -> right = temp2;
	mw(root);
	return 0;
}