#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int n, int pivot)
{
	int j = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[pivot] >= arr[i])
		{
			swap(arr[i], arr[j]);
			j++;
		}
	}
	swap(arr[j], arr[pivot]);
	return j;
}

int main()
{
	int arr[] = {4, 5, 2, 1, 5, 7, 34, 2, 7, 54, 2, 12, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	int p = partition(arr, n, n - 1);
	cout << p << endl;
	return 0;
}