#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, flag = 1;
		cin >> n;
		vector<int> vec(n);
		vector<int> result;
		for (int i = 0; i < n; i++)
			cin >> vec[i];
		int maxi = INT_MIN;
		for (int i = n - 1; i > -1; i--)
		{
			if (vec[i] >= maxi)
			{
				result.push_back(vec[i]);
				maxi = vec[i];
			}

		}
		int m = result.size();
		for (int i = m - 1; i > -1; i--)
			cout << result[i] << " ";
		cout << endl;
	}
	return 0;
}