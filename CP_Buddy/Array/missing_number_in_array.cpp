#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int x = 0, y = 0;
		vector<int> vec(n - 1);
		for (int i = 0; i < n - 1; i++)
		{
			cin >> vec[i];
			x = x ^ vec[i];
		}
		for (int i = 1; i <= n; i++)
			y = y ^ i;
		y = y ^ x;
		cout << y << endl;
	}
	return 0;
}