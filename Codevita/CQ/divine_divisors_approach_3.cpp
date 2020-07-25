#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
	int n;
	// cin >> n;
	n = 45;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
			if (pow(i, 2) != n)
				cout << (n / i) << " ";
		}
	}
	return 0;
}