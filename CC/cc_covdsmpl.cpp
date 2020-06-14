#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
	/*
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	*/
	int t;
	cin >> t;
	while (t--)
	{
		int n, p;
		cin >> n >> p;
		int x = 0;
		vector<vector<int>> mat(n + 1, vector<int>(n + 1, 0));
		int row1 = 1, row2 = n, col1 = 1, col2 = n;
		for (int i = row1; i <= row2; i++) {
			for (int j = col1; j <= col2; j++) {
				cout << "1 " << i << " " << j << " " << i << " " << j << endl;
				cout.flush();
				int x2;
				cin >> x2;
				if (x2 == -1)
				{
					exit;
				}
				mat[i][j] = x2;
			}
		}
		cout << "2" << endl;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cout << mat[i][j] << " ";
				cout.flush();
			}
			cout << endl;
		}
		cin >> x;
		if (x == -1)
		{
			exit;
		}
		else if (x == 1) continue;
	}
	return 0;
}