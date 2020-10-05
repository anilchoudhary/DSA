#include<bits/stdc++.h>
using namespace std;

int decode(char x)
{
	if (x == 'I')
		return 1;
	if (x == 'V')
		return 5;
	if (x == 'X')
		return 10;
	if (x == 'L')
		return 50;
	if (x == 'C')
		return 100;
	if (x == 'D')
		return 500;
	if (x == 'M')
		return 1000;

	return -1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		int n = str.length();
		int res = 0;
		int x, y = 1000;
		for (int i = 0; i < n; i++)
		{
			x = decode(str[i]);
			if (x <= y)
				res += x;
			else
			{
				res -= 2 * y;
				res += x;
			}
			y = x;
		}
		cout << res << endl;
	}
}