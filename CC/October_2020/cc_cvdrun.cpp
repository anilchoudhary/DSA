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
		int n, k, x, y;
		cin >> n >> k >> x >> y;
		unordered_set<int> us;
		while (1)
		{
			if (us.find(x) != us.end())
			{
				cout << "NO" << endl;
				break;
			}
			us.insert(x);
			x = (x + k) % n;
			if (x == y)
			{
				cout << "YES" << endl;
				break;
			}

		}
	}
	return 0;
}
