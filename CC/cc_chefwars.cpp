#include<bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--)
	{
		int h, p;
		cin >> h >> p;
		while (h > 0 && p > 0)
		{
			h -= p;
			p /= 2;
		}
		if (h <= 0)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}