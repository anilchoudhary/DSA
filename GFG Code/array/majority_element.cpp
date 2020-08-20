#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		unordered_map<int, int> um;
		int n, x, ans = -1;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			um[x]++;
		}
		for (auto x : um)
		{
			if (x.second > n / 2)
			{
				ans = x.first;
			}
		}
		cout << ans << endl;
	}
	return 0;
}