#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k;
	cin >> n >> k;
	int temp = 0, ans;
	vector<int> v;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			temp++;
			if (temp == k)
			{
				cout << n / i << endl;
				return 0;
			}
			v.push_back(i);
		}
	}
	if (temp * 2 < k)
		cout << 1 << endl;
	else
		cout << v[k - temp];
	return 0;
}