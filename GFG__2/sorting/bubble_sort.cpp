#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
	int sorted = 0;
	for (int i = 0; i < n; i++)
	{
		sorted = 1;
		for (int j = 1; j < n - i; j++)
		{
			if (arr[j - 1] > arr[j])
				swap(arr[j - 1], arr[j]);
			sorted = 0;
		}
		if (sorted == 1)
			break;
	}
}

int main()
{
	int arr[]  = {3, 4, 5, 7, 8, 2, 1, 6, 7, 75, 63, 2, 1, 34, 76, 54, 31, 65, 535, 34, 6, 75, 3, 432, 53, 725, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, n);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
	return 0;
}