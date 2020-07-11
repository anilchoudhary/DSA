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
		int arr[n];
		// int sum=1;
		arr[0] = 1;
		for (int i = 1; i < n; i++)
		{
			arr[i] = arr[i - 1] + 2;
		}
	}
	return 0;
}