#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n], brr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> brr[i];
		}
		sort(arr, arr + n, greater<int>());
		sort(brr, brr + n, greater<int>());
		int flag = 1;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] != brr[i])
				flag = 0;
		}
		if (flag)
		{
			cout << 0 << endl;
			continue;
		}

		map<int, int> arrmap, brrmap, bothmap;
		for (int i = 0; i < n; i++)
		{
			arrmap[arr[i]]++;
			brrmap[brr[i]]++;
			bothmap[arr[i]]++;
			bothmap[brr[i]]++;
		}
		flag = 1;
		for (int i = 0; i < n; i++)
		{
			if (bothmap[arr[i]] % 2 || bothmap[brr[i]] % 2 )
			{
				flag = 0;
			}
		}
		if (!flag)
		{
			cout << -1 << endl;
			continue;
		}
		int ans = 0;
		// for (int i = 0; i < n; i++)
		// {
		// 	if (brrmap.find(arr[i]) == brrmap.end())
		// 		ans += (arrmap[arr[i]] / 2) * arr[i];
		// }

		for (auto x : arrmap)
		{
			int key = x.first;
			int value = x.second;
			if (brrmap.find(key) == brrmap.end())
				ans += (value / 2) * key;
		}
		cout << ans << endl;


	}
	return 0;
}