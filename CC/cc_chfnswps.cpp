#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		vector <int> arr, brr;
		int x;
		map <int, int> mymap;

		for (int i = 0; i < n; i++)
		{
			cin >> x;

			mymap[x]++;
			// 	arr.push_back(x);
		}

		for (int i = 0; i < n; i++)
		{
			cin >> x;

			mymap[x]--;
			// 	brr.push_back(x);
		}

		bool flag = false;
		// arr.clear();
		// brr.clear();

		int mi = x;

		for (auto i : mymap)
		{
			mi = min(mi, i.first);
			x = abs(i.second);

			if (x % 2)
				flag = true;

			x = i.second;

			if (x > 0)
			{
				x /= 2;

				while (x--)
					arr.push_back(i.first);
			}
			else if (x < 0)
			{
				x = abs(x) / 2;

				while (x--)
					brr.push_back(i.first);
			}
		}

		if (flag)
		{
			cout << -1 << endl;
			continue;
		}

		reverse(brr.begin(), brr.end());

		int ans = 0;

		for (int i = 0; i < arr.size(); i++)
			ans += min(2 * mi, min(arr[i], brr[i]));

		cout << ans << endl;
	}
}