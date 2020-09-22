#include<bits/stdc++.h>
using namespace std;

string stacks[100];
int top = -1;

void push(string x)
{
	top++;
	stacks[top] = x;
}

string pop()
{
	if (top != -1)
	{
		string x = stacks[top];
		top--;
		return x;
	}
	else
	{
		return "";
	}
}

int main()
{
	string prefix = "*-a/bc-/akl";
	for (int i = prefix.length(); i >= 0; i--)
	{
		if (!isalpha(prefix[i]))
		{
			string ss(1, prefix[i]);
			string a = pop();
			string b = pop();
			string result = "(" + a + ss + b + ")";
			push(result);
		}
		else
		{
			string s(1, prefix[i]);
			push(s);
		}
	}
	cout << pop();
	return 0;
}