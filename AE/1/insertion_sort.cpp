#include "bits/stdc++.h"
using namespace std;

void insertion_sort(int arr[], int n)
{
	int j = 0, temp;
	for (int i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && temp < arr[j])
		{
			arr[j + 1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
}

int main()
{
	int arr[] = { 141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	insertion_sort(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}