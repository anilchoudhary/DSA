#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int m, int e)
{
	int n1 = m - s + 1;
	int n2 = e - m;
	int arr1[n1 + 1],  arr2[n2 + 1];
	arr1[n1] = arr2[n2] = INT_MAX;

	for (int i = s; i <= m; i++)
	{
		arr1[i] = arr[i];
	}
	int j = 0;
	for (int i = m; i <= e; i++)
	{
		arr2[j++] = arr[i];
	}
	int i = 0; j = 0;
	for (int k = s; k <= e; k++)
	{
		if (arr1[i] > arr2[j])
		{
			arr[k] = arr2[j];
			j++;
		}
		else
		{
			arr[k] = arr1[i];
			i++;
		}
	}

}

void merge_sort(int arr[], int s, int e)
{
	int m = (s + e) / 2;
	if (m >= s && m <= e)
	{
		merge_sort(arr, s, m);
		merge_sort(arr, m + 1, e);
		merge(arr, s, m, e);
	}

}

int main()
{
	int arr[]  = {3, 4, 5, 7, 8, 2, 1, 6, 7, 75, 63, 2, 1, 34, 76, 54, 31, 65, 535, 34, 6, 75, 3, 432, 53, 725, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	merge_sort(arr, 0, n - 1);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
	return 0;
}