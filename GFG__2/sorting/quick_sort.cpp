#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
	int j = s;
	int pivot = e;
	for (int i = s; i < e; i++)
	{
		if (arr[pivot] > arr[i])
		{
			swap(arr[i], arr[j]);
			j++;
		}
	}
	swap(arr[j], arr[e]);
	return j;
}

void quick_sort(int arr[], int s, int e)
{
	if (s < e)
	{
		int m = partition(arr, s, e);
		quick_sort(arr, s, m - 1);
		quick_sort(arr, m + 1, e);
	}
}

int main()
{
	int arr[] = {4, 5, 2, 1, 5, 7, 34, 2, 7, 54, 2, 12, 56};
	int n = sizeof(arr) / sizeof(arr[0]);
	quick_sort(arr, 0, n - 1);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
	return 0;
}