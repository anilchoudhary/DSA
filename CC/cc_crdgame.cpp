#include<bits/stdc++.h>
#define int long long
using namespace std;

int sod(int n)
{
	if (n == 0)
		return 0;
	return sod(n / 10) + (n % 10);
}

int32_t main()
{
	/*
	#ifndef ONLINE_JUDGES
		freopen("input.txt", "r" , stdin);
		freopen("output.txt", "w", stdout);
	#endif
	*/
	int t;
	cin >> t;
	while (t--)
	{
		int n, x, y;
		int chef = 0, morty = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x >> y;
			// cout << sod(x) << " " << sod(y) << endl;
			if (sod(x) > sod(y))
				chef++;
			else if (sod(x) < sod(y))
				morty++;
			else
			{
				chef++;
				morty++;
			}
		}
		if (chef > morty)
			cout << 0 << " " << chef << endl;
		else if (morty > chef)
			cout << 1 << " " << morty << endl;
		else
			cout << 2 << " " << chef << endl;
	}
	return 0;
}