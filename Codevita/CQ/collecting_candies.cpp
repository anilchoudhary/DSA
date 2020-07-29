#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGES
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		priority_queue <int, vector<int>, greater<int>> mh;
		int total = 0;
		int n, x;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			mh.push(x);
		}
		while (mh.size() > 1)
		{
			int t1 = mh.top();
			mh.pop();
			int t2 = mh.top();
			mh.pop();
			total = total + t1 + t2;
			mh.push(t1 + t2);
		}
		cout << total << endl;
	}
	return 0;
}