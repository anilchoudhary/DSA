#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n)
{
	int i, j, loc, temp, min;

	for (i = 0; i < n - 1; i++)
	{
		min = a[i];
		loc = i;
		for (j = i + 1; j < n; j++)
		{
			if (min > a[j])
			{
				min = a[j];
				loc = j;
			}
		}
		swap(a[i], a[loc]);
	}

}

int main()
{
	int arr[] = { 141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	selection_sort(arr, n);

	cout << "\nSorted list is as follows\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}