#include<bits/stdc++.h>
using namespace std;

void count_sort(int arr[], int n, int k)
{
	int count[k] = {0};
	for (int i = 0; i < n; i++)
	{
		count[arr[i]]++;
	}

	for (int i = 1; i < k; i++)
	{
		count[i] = count[i - 1] + count[i];
	}
	int output[n];
	for (int i = n - 1; i >= 0; i--)
	{
		output[count[arr[i]] - 1] = arr[i];
		count[arr[i]]--;
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = output[i];
	}
}

int main()
{
	int arr[] = {4, 5, 2, 1, 5, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 8;
	count_sort(arr, n, k);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
	return 0;
}