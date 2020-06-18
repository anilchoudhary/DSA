#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	/*
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	*/
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int a = i * i, b = a * (a - 1) / 2;
		if (i > 2)
			b -= 4 * (i - 1) * (i - 2);
		cout << b << endl;
	}
	return 0;
}