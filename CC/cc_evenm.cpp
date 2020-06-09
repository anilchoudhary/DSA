#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGES
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n, i, j, k;
		cin >> n;
		int x = 1;
		for (i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				for (j = 0; j < n; j++)
				{
					cout << x << " ";
					x++;
				}
			}
			else
			{
				for (j = n - 1, k = 0; j >= 0; j--, k++)
				{
					cout << x + j - k << " ";
					x++;
				}
			}
			cout << endl;
		}
		// cout << endl;
	}
	return 0;
}