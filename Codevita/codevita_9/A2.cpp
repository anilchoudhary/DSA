#include<bits/stdc++.h>
using namespace std;

int main()
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
		}
	}

	int side_biggest_square = pow(count_of_d, 0.5);
	cout << count_of_d << endl;
	cout << side_biggest_square;

	return 0;
}