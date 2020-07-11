#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, a;
	cin >> n >> m >> a;
	int count = 0;
	while (n > a && m > a)
	{
		n -= a;
		m -= a;
		count++;
	}
	while (n > 0)
	{
		n -= a;
		count++;
	}
	while (m > 0)
	{
		m -= a;
		count++;
	}
	cout << count << endl;
	return 0;
}