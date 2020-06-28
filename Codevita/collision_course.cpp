#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n][3];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];
	}
	double dist[n], x;
	int ans = 0;
	unordered_map<double, int> time;
	for (int i = 0; i < n; i++)
	{
		dist[i] = sqrt(pow(arr[i][0], 2) + pow(arr[i][1], 2));
		x = double(dist[i] / arr[i][2]);
		// cout << x << endl;
		time[x]++;
	}
	for (auto i = time.begin(); i != time.end(); ++i)
	{
		if (i->second >= 2)
		{
			ans += ((i->second) * (i->second - 1)) / 2;
		}
	}
	cout << ans << endl;
	return 0;
}