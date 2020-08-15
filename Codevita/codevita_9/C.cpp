#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int low, high, k;
	cin >> low >> high >> k;

	int even_count = 0, odd_count = 0;
	for (int i = low; i <= high; i++)
	{
		if (i % 2 == 0)
			even_count++;
		else
			odd_count++;
	}



}