#include<bits/stdc++.h>
using namespace std;

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
		int n, k;
		cin >> n >> k;
		int arr[n], sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] > k)
				sum += arr[i] - k;
		}
		cout << sum << endl;;
	}
	return 0;
}