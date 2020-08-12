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
		cin >> arr[i];
	int x;
	cin >> x;
	unordered_set <int> us;
	for (int i = 0; i < n; i++)
	{
		int temp = x - arr[i];
		for (int j = i + 1; j < n; j++)
		{
			int temp1 = temp - arr[j];
			if (us.find(temp1) != us.end())
			{
				cout << "true";
				return 0;
			}
			us.insert(arr[j]);
		}
	}
	cout << "false";
	return 0;
}