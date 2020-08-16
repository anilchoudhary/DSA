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
		int n, k, x;
		cin >> n >> k;
		// vector<int> vec(n);
		int result = INT_MAX;
		int ans;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (result > (k / x) && k % x == 0)
			{
				result = k / x;
				ans = x;
			}
		}
		if (result == INT_MAX)
			cout << -1 << endl;
		else
			cout << ans << endl;
	}
	return 0;
}