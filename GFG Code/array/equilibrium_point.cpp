#include<bits/stdc++.h>
using namespace std;
int main()
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
		vector<int> vec(n);
		for (int i = 0; i < n; i++)
			cin >> vec[i];
		if (n == 1)
			cout << vec[0];
		vector<int> presum;
		presum.push_back(vec[0]);
		for (int i = 1; i < n; i++)
		{
			presum[i] = vec[i] + presum[i - 1];
		}
		int x;
		for (int i = 1; i < n; i++)
		{
			x = presum[n - 1] - presum[i];
			if (x == presum[i - 1])
				cout << i + 1 << " ";
		}
		cout << endl;
	}
	return 0;
}