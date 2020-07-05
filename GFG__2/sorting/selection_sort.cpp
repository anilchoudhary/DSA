#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
	int mini = 0;
	for (int i = 0; i < n; i++)
	{
		mini = i;
		for (int j = i; j < n; j++)
		{
			if (arr[j] <= arr[mini])
				mini = j;
		}
		// cout << arr[mini] << "  ";

		swap(arr[mini], arr[i]);
	}
}

int main()
{
	int arr[]  = {3, 4, 5, 7, 8, 2, 1, 6, 7, 75, 63, 2, 1, 34, 76, 54, 31, 65, 535, 34, 6, 75, 3, 432, 53, 725, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	selection_sort(arr, n);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
	return 0;
}