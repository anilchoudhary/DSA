#include<bits/stdc++.h>
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	//code
	int t;
	cin >> t;
	while (t--)
	{
		int n, i, j;
		cin >> n;
		vector<int> vec(n);
		for (i = 0; i < n; i++)
		{
			cin >> vec[i];
		}
		sort(vec.begin(), vec.end());
		i = 0; j = n - 1;
		while (i <= j)
		{
			if (i == j)
				cout << vec[j];
			else
				cout << vec[i] << " " << vec[j] << " ";
			i++; j--;
		}
		cout << endl;
	}
	return 0;
}