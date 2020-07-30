#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGES
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k;
	cin >> n >> k;
	int arr[n];
	int brr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
		cin >> brr[i];

	int diff = 0, res = 0;
	int temp;
	for (int i = 0; i < n; i++)
	{
		int pro = arr[i] * brr[i];
		res = res + pro;
		if (pro < 0 && brr[i] < 0)
			temp = (arr[i] + 2 * k) * brr[i];
		else if (pro < 0 && arr[i] < 0)
			temp = (arr[i] - 2 * k) * brr[i];
		else if (pro > 0 && arr[i] < 0)
			temp = (arr[i] + 2 * k) * brr[i];
		else if (pro > 0 && arr[i] > 0)
			temp = (arr[i] - 2 * k) * brr[i];
		int d = abs(pro - temp);
		if (d > diff)
			diff = d;
	}
	cout << res - diff;
	return 0;
}