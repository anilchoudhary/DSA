#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int flag = 0;
		unordered_set<int> us;
		for (int i = 0; i < n; i++)
		{
			if (us.find(k - arr[i]) != us.end())
			{
				flag = 1;
				break;
			}
			us.insert(arr[i]);
		}
		if (flag)
			cout << "Yes";
		else
			cout << "No";
		cout << endl;
	}
	return 0;
}