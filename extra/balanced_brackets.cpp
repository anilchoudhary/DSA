#include<bits/stdc++.h>
using namespace std;

int stacks[100];
int top = -1;

void push(int x)
{
	top++;
	stacks[top] = x;
}

int pop()
{
	if (top != -1)
	{
		int x = stacks[top];
		top--;
		return x;
	}
	else
	{
		// cout << "Uderflow..." << endl;
		return -1;
	}
}

int main()
{
	int x, flag = 1;
	string str = "{[()]}(){}";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ')')
		{
			if (str[top] != '(' || top == -1)
			{
				flag = 0;
				break;
			}
			else
				x = pop();
		}
		else if (str[i] == ']' || top == -1)
		{
			if (str[top] != '[')
			{
				flag = 0;
				break;
			}
			else
				x = pop();
		}
		else if (str[i] == '}')
		{
			if (str[top] != '{' || top == -1)
			{
				flag = 0;
				break;
			}
			else
				x = pop();
		}
		else
			push(str[i]);
	}
	if (flag || top == -1)
		cout << "balanced brackets!";
	else
		cout << "Unbalanced brackets!";
	return 0;
}