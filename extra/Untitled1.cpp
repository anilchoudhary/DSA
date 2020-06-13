#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n)
{
	int i, j, loc, temp, min;

	for (i = 0; i < n ; i++)
	{
		min = INT_MAX;
		loc = i;
		for (j = i ; j < n; j++)
		{
			if (min > a[j])
			{
				min = a[j];
				loc = j;
			}
		}
		// cout << min << endl;
		swap(a[i], a[loc]);
		// for (int k = 0; k < n; i++);
		// {
		// 	cout << a[k] << " ";
		// }
		// cout << endl;
	}

	cout << "\nSorted list is as follows\n";
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int main()
{
	int arr[] = { 141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	selection_sort(arr, n);
}