#include<bits/stdc++.h>
using namespace std;

int children(int x, int y)
{
	if (y == 1)
		return x;
	if (x == y)
		return 1;
	x -= y;
	return 1 + children(max(x, y), min(x, y));
}

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int min_len_of_cadbury, max_len_of_cadbury, min_wid_of_cadbury, max_wid_of_cadbury;
	cin >> min_len_of_cadbury >> max_len_of_cadbury >> min_wid_of_cadbury >> max_wid_of_cadbury;
	int total_children = 0;
	for (int i = min_len_of_cadbury; i <= max_len_of_cadbury; i++)
	{
		for (int j = min_wid_of_cadbury; j <= max_wid_of_cadbury; j++)
		{
			total_children += children(max(i, j), min(i, j));
		}
	}
	cout << total_children;
	return 0;
}