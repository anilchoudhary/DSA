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
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];
	for (int i = 1; i < n - 1; i++)
	{
		if ((vec[i - 1] < vec[i]) && (vec[i + 1] < vec[i]))
			cout << vec[i] << " ";
	}
	return 0;
}