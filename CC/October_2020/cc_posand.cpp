#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool ispowerof2(int n)
{
	return (ceil(log2(n)) == floor(log2(n)));
}

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

		if (ispowerof2(n))
		{
			cout << -1 << endl;
			continue;
		}
		if (n == 1)
		{
			cout << 1 << endl;
			continue;
		}
		if (n == 3)
		{
			cout << "2 3 1" << endl;
			continue;
		}
		cout << "2 3 1 ";
		for (int i = 4; i <= n; i++)
		{
			if (ispowerof2(i))
				cout << i + 1 << " ";
			else if (ispowerof2(i - 1))
				cout << i - 1 << " ";
			else
				cout << i << " ";
		}
	}
	return 0;
}
