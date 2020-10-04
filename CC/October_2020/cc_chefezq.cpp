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
		int n, k;
		cin >> n >> k;
		vector<int> vec(n);
		for (int i = 0; i < n; i++)
			cin >> vec[i];
		int temp = 0;
		int cnt = 0;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			if ((temp + vec[i]) < k)
			{
				ans = cnt + 1;
				break;
			}
			cnt++;

			// cnt += (temp + vec[i]) / k;
			temp = (temp + vec[i]) - k;
		}
		if (temp > k)
		{
			cnt += temp / k;
			cnt++;
			ans = cnt;
		}
		cout << ans << endl;
	}
	return 0;
}
