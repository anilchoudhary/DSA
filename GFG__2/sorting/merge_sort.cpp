#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int m, int e)
{
	int n1 = m - s + 1;
	int n2 = e - m;
	int arr1[n1 ],  arr2[n2 ];

	for (int i = 0; i < n1; i++)
	{
		arr1[i] = arr[i + s];
	}
	for (int i = 0; i < n2; i++)
	{
		arr2[i] = arr[m + 1 + i];
	}
	int i = 0, j = 0; int k = s;
	while (i < n1 && j < n2)
	{
		if (arr1[i] > arr2[j])
		{
			arr[k++] = arr2[j];
			j++;
		}
		else
		{
			arr[k++] = arr1[i];
			i++;
		}
	}
	while (i < n1)
	{
		arr[k++] = arr1[i++];
	}
	while (j < n2)
	{
		arr[k++] = arr2[j++];
	}

}

void merge_sort(int arr[], int s, int e)
{
	if (e > s)
	{
		int m = s + (e - s) / 2;
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