#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int q;
	cin >> q;
	while (q--)
	{
		int n;
		cin >> n;
		int i = 0;
		int ans = 0;
		while (ans <= n)
		{
			ans += pow(3, i);
			i++;
		}
		cout << ans << endl;
	}
	return 0;
}