#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack<char> s;
	string str = ")(";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			s.push(str[i]);
		else if (s.empty() == true)
		{
			cout << "unbalanced";
			return 0;
		}
		else if (str[i] == ')' && s.top() == '(')
			s.pop();
		else if (str[i] == ']' && s.top() == '[')
			s.pop();
		else if (str[i] == '}' && s.top() == '{')
			s.pop();
		// else
		// {
		// 	cout << "unbalanced" << endl;
		// 	break;
		// }
	}
	if (!s.empty())
		cout << "unbalanced";
	else
		cout << "balanced";
	return 0;
}