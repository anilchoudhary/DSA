#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGES
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int sum = 0;
		int bsum = arr[0];
		for (int i = 1; i < n; i++)
		{
			bsum  += arr[i];
			sum = bsum + arr[i];
			bsum -= arr[i - 1];
		}
		cout << sum << endl;
	}
}