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
		int n, s;
		cin >> n >> s;
		vector<int> vec(n);
		for (int i = 0; i < n; i++)
			cin >> vec[i];
		int start = 0, end = -1;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += vec[i];
			if (sum > s )
			{
				while (sum > s)
				{
					sum -= vec[start];
					start++;
				}
			}
			// cout << sum << endl;
			if (sum == s)
			{
				end = i;
				break;
			}
		}
		if (end == -1)
			cout << "-1";
		else
			cout << start + 1 << " " << end + 1;
		cout << endl;
	}
	return 0;
}