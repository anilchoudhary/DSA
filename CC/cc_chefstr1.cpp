#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	/*
	#ifndef ONLINE_JUDGES
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w", stdout);
	#endif */
	int t;
	cin >> t;
	while (t--)
	{
		int n, x, ans = 0;
		cin >> n;
		vector<int> vec;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			vec.push_back(x);
		}
		for (int i = 1; i < n; i++)
		{
			ans += abs(vec[i] - vec[i - 1]) - 1;
			// cout << ans << endl;
			// cout << vec[i] << endl;
		}
		cout << ans << endl;
	}
	return 0;
}