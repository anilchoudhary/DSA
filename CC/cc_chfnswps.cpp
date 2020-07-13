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
		map<int, int> arrmap, brrmap, bothmap;
		for (int i = 0; i < n; i++)
		{
			arrmap[arr[i]]++;
			brrmap[brr[i]]++;
			bothmap[arr[i]]++;
			bothmap[brr[i]]++;
		}
		bool flag = 1;
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

		sort(arr, arr + n, greater<int>());
		sort(brr, brr + n, greater<int>());
		flag = 1;
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

		for (auto x : arrmap)
		{
			int key = x.first;
			int value = x.second;
			if (brrmap.find(key) != brrmap.end())
			{
				if (brrmap[key] == value)
				{
					arrmap.erase(key);
					brrmap.erase(key);
				}
				else if (brrmap[key] > value)
				{
					brrmap[key] = brrmap[key] - value;
					arrmap[key] = 0;
				}
				else
				{
					arrmap[key] -= brrmap[key];
					brrmap[key] = 0;
				}
			}
		}
		// int i = 0;
		vector<int> arrv, brrv;
		for (auto x : arrmap)
		{
			int key = x.first;
			int value = (x.second) / 2;
			while (value--)
				arrv.push_back(key);
		}
		// int n1 = i;
		// i = 0;
		// for (auto x : brrmap)
		// {
		// 	cout << x.first << " " << x.second;
		// 	cout << endl;
		// }
		for (auto x : brrmap)
		{
			int key = x.first;
			int value = (x.second) / 2;
			while (value--)
				brrv.push_back(key);
		}

		// int n2 = i;
		sort(brrv.begin(), brrv.end(), greater<int>());
		sort(arrv.begin(), arrv.end());
		int ans = 0;
		// for (int i = 0; i < arrv.size(); i++)
		// 	cout << arrv[i] << " ";
		// cout << endl;
		// for (int i = 0; i < brrv.size(); i++)
		// 	cout << brrv[i] << " ";
		// cout << endl;
		int mini = min(arrv[0], brrv[brrv.size() - 1]);
		for (int i = 0; i < arrv.size(); i++)
		{
			ans += min (2 * mini, min(arrv[i], brrv[i]));
		}
		cout << ans << endl;
	}
	return 0;
}