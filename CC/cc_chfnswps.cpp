#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n], brr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> brr[i];
		}
		sort(arr, arr + n, greater<int>);
		sort(brr, brr + n, greater<int>);

	}
}