#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int size_of_org_wall;
	cin >> size_of_org_wall;
	vector<vector<char>> org_wall(size_of_org_wall, vector<char>(size_of_org_wall));
	int count_of_d = 0;
	for (int i = 0; i < size_of_org_wall; i++)
	{
		for (int j = 0; j < size_of_org_wall; j++)
		{
			cin >> org_wall[i][j];
			if (org_wall[i][j] == 'D')
				count_of_d++;
			else if (org_wall[i][j] == 'C')
				continue;
			else
			{
				cout << 0;
				return 0;
			}
		}
	}

	vector<int> d_cols_count(size_of_org_wall, 0);
	vector<int> d_rows_count(size_of_org_wall, 0);
	for (int i = 0; i < size_of_org_wall; i++)
	{
		for (int j = 0; j < size_of_org_wall; j++)
		{
			// cout << org_wall[i][j] << " ";
			if (org_wall[i][j] == 'D')
			{
				d_cols_count[j]++;
				d_rows_count[i]++;
			}
		}
		// cout << endl;
	}
	// cout << endl;
	sort(d_cols_count.begin(), d_cols_count.end(), greater<int>());
	sort(d_rows_count.begin(), d_rows_count.end(), greater<int>());

	int side_biggest_square = 0;

	for (int i = 0; i < size_of_org_wall; i++)
	{
		if (i + 1 <= d_cols_count[i])
		{
			if (i + 1 > side_biggest_square)
				side_biggest_square = i + 1;
		}
	}
	// cout << side_biggest_square;
	// cout << endl;

	for (int i = 0; i < size_of_org_wall; i++)
	{
		if (i + 1 <= d_rows_count[i])
		{
			if (i + 1 > side_biggest_square)
				side_biggest_square = i + 1;
		}
	}


	// for (auto x : d_cols_count)
	// 	cout << x << " ";
	// cout << endl;
	// for (auto x : d_rows_count)
	// 	cout << x << " ";
	cout << side_biggest_square;

	return 0;
}