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
		vector<vector<int>> mat, mat2;
		for (int i = 0; i < n; i++)
		{
			vector<int> row(n);
			mat.push_back(row);
			mat2.push_back(row);
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "1 1 1 " << (i + 1) << " " << (j + 1) << "\n";
				int x;
				cin >> x;
				mat2[i][j] = x;
				if (i == 0 && j == 0)
					mat[i][j] = x;
			}
		}


		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0 && j > 0)
				{
					mat[i][j] = mat2[i][j] - mat2[i][j - 1];
				}
				else if (j == 0 && i > 0)
				{
					mat[i][j] = mat2[i][j] - mat2[i - 1][j];
				}
				else if (i > 0 && j > 0)
				{
					mat[i][j] = mat2[i][j] - mat2[i - 1][j] - mat2[i][j - 1] + mat2[i - 1][j - 1];
				}
			}
		}

		cout << "2" << endl;
		for (int i = 0; i < n; i++)
		{
			vector<int> row = mat[i];
			for (int j = 0; j < n; j++)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		int x;
		cin >> x;
		if (x == -1)
			return 0;
	}
	return 0;
}