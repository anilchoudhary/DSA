#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int max = 0, x = 0, end = 0;
	for (int i = 0; i < n - 1 ; i++)
	{
		if (arr[i] <= arr[i + 1])
		{
			x++;
			if (x > max)
			{
				end = i;
				max = x;
			}
		}
		else
		{
			x = 0;
		}
	}
	max++; end++;
	// cout << max << " " << end << endl;
	for (int i = end - max + 1; i <= end; i++)
		cout << arr[i] << " ";
	return 0;
}