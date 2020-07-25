#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
	int n;
	// cin >> n;
	n = pow(10, 12);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cout << i << " ";
	}
	return 0;
}