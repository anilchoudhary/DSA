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
	string str = "23+5+";
	int a, b;
	for (int i = 0; i < str.size(); i++)
	{
		char ch = str[i];
		switch (ch)
		{
		case '+':
			a = pop();
			b = pop();
			push(a + b);
			break;
		case '-':
			a = pop();
			b = pop();
			push(a - b);
			break;
		case '/':
			a = pop();
			b = pop();
			push(a * b);
			break;
		case '*':
			a = pop();
			b = pop();
			push(a / b);
			break;
		default:
			push(str[i] - '0');
			break;
		}
	}

	cout << pop();
	return 0;


}