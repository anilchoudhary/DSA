
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t;
	cin >> t;
	while (t--)
	{
		ll y, x;
		cin >> y >> x;
		ll z = max(y, x);
		ll z2 = (z - 1) * (z - 1);
		ll ans;
		if (z % 2)
		{
			if (y == z)
			{
				ans = z2 + x;
			}
			else {
				ans = z2 + 2 * z - y;
			}
		}
		else {
			if (y == z)
			{
				ans = z2 + 2 * z - x ;
			}
			else
			{
				ans = z2 + y ;
			}
		}
		cout << ans << endl;
	}

}
