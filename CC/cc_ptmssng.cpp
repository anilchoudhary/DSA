#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int x, y;
		cin >> x >> y;
		int xans, yans;
		xans = x;
		yans = y;
		for (int i = 0; i < 4n - 2; i++)
		{
			cin >> x >> y;
			xans ^= x;
			yans ^= y;
		}
		cout << xans << " " << yans << endl;
	}
	return 0;
}