#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int id, z, s, l, k, c = 0, j, t, i, d;
	cin >> t;
	for (j = 0; j < t; j++)
	{
		cin >> i >> d >> z;
		c = 0;
		s = 1;
		while (s != 0)
		{
			i = i + d;
			for (k = 2; k <= z; k++)
			{
				if ((i % k == 0) && (z % k == 0))
					++c;
			}
			if (c == 0)
			{
				cout << -1 << endl;
				break;
			}
			s = i % z;
			if (s == 0)
			{
				l = i / z;
				cout << l;
			}
			l = 0;
		}
	}
	return 0;
}