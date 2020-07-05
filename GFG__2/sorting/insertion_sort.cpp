#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
	int x, temp;
	for (int i = 1; i < n; i++)
	{
		temp = arr[i];
		x = i;
		for (int j = i - 1 ; j >= 0 && temp < arr[j]; --j)
		{
			arr[j + 1] = arr[j];
			x = j;
		}
		arr[x] = temp;
	}
}

int main()
{
	int arr[]  = {3, 4, 5, 7, 8, 2, 1, 6, 7, 75, 63, 2, 1, 34, 76, 54, 31, 65, 535, 34, 6, 75, 3, 432, 53, 725, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	insertion_sort(arr, n);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
	return 0;
}