#include<bits/stdc++.h>
using namespace std;

int create(int arr[][100], int points[], int n)
{
	int j, count = 0, index = 2;
	int i, k = 0, l = 0, m = n;
	while (k < m && l < n)
	{
		for (i = l; i < n; i++)
		{
			arr[k][i] = ++count;
			if (count % 11 == 0)
			{
				points[index++] = k;
				points[index++] = i;
			}
		}
		k++;
		for (i = k; i < m; ++i)
		{
			arr[i][n - 1] = ++count;
			if (count % 11 == 0)
			{
				points[index++] = i;
				points[index++] = n - 1;
			}
		}
		n--;
		if (k < m)
		{
			for (i = n - 1; i >= l; --i)
			{
				arr[m - 1][i] = ++count;
				if (count % 11 == 0)
				{
					points[index++] = m - 1;
					points[index++] = i;
				}
			}
			m--;
		}
		if (l < n)
		{
			for (i = m - 1; i >= k; --i)
			{
				arr[i][l] = ++count;
				if (count % 11 == 0)
				{
					points[index++] = i;
					points[index++] = l;
				}
			}
			l++;
		}
	}
	return index;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int i, j, count = 0, index = 2;
	int arr[100][100];
	int points[10000];
	points[0] = 0, points[1];
	index = create(arr, points, n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << "\n";
	}
	cout << "Total Power points: " << index / 2 << endl;
	for (int i = 0; i < index; i += 2)
		cout << "(" << points[i] << "," << points[i + 1] << ")" << endl;
	return 0;
}