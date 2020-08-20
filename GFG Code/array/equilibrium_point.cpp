#include<bits/stdc++.h>
using namespace std;
#define int long long int

int solve(int arr[], int size)
{

	int right_sum = 0, left_sum = 0;
	// Maintains left cumulative sum
	left_sum = 0;

	// Maintains right cumulative sum
	right_sum = 0;
	int i = -1, j = -1;

	for ( i = 0, j = size - 1 ; i < j ; i++, j-- )
	{
		left_sum += arr[i];
		right_sum += arr[j];

		// Keep moving i towards center until
		// left_sum is found lesser than right_sum
		while (left_sum < right_sum && i < j)
		{
			i++;
			left_sum += arr[i];
		}
		// Keep moving j towards center until
		// right_sum is found lesser than left_sum
		while (right_sum < left_sum && i < j)
		{
			j--;
			right_sum += arr[j];
		}
	}
	if (left_sum == right_sum && i == j )
		return i + 1;
	else
		return -1;
}

int32_t main()
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
		int vec[n];
		for (int i = 0; i < n; i++)
			cin >> vec[i];
		cout << solve(vec, n);
		cout << endl;
	}
	return 0;
}