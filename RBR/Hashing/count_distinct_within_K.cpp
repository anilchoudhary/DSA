#include "bits/stdc++.h"
using namespace std;

void countDistinct(int arr[], int k, int n)
{
	map<int, int> hm;

	int dist_count = 0;

	for (int i = 0; i < k; i++)
	{
		if (hm[arr[i]] == 0)
		{
			dist_count++;
		}
		hm[arr[i]] += 1;
	}

	cout << dist_count << endl;

	for (int i = k; i < n; i++)
	{
		if (hm[arr[i - k]] == 1)
		{
			dist_count--;
		}
		hm[arr[i - k]] -= 1;


		if (hm[arr[i]] == 0)
		{
			dist_count++;
		}
		hm[arr[i]] += 1;

		cout << dist_count << endl;
	}
}

int main()
{
	int arr[] = {4, 5, 7, 2, 2, 5, 7, 8, 5, 3, 3, 6, 7, 8, 3, 1, 3, 5, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	int k = 14;
	countDistinct(arr, k, size);

	return 0;
}
