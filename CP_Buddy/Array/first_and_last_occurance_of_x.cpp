#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n, x, y;
		cin >> n >> x;
		int first = -1, last = -1;
		for (int i = 0; i < n; i++)
		{
			cin >> y;
			if (y == x && first == -1)
			{
				first = i;
				last = i;
			}
			else if (y == x)
				last = i;
		}
		cout << first << " " << last;
		cout << endl;
	}

	return 0;
}