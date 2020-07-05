#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int brr[], int n, int m)
{
	int i = 0, j = 0;
	int a[n + m];
	for (int k = 0; k <= m + n; k++)
	{

		if (arr[i] > brr[j])
		{
			a[k] = brr[j];
			j++;
		}
		else
		{
			a[k] = arr[i];
			i++;
		}
	}

	for (auto x : a)
	{
		cout << x << " ";
	}
}

int main()
{
	int arr[]  = {3, 4, 5, 7, 8, 2, 1, 6, 7, 75, 63, 2, 1, 34, 76, 54, 31, 65, 535, 34, 6, 75, 3, 432, 53, 725, 4};
	int brr[] = {3, 2, 6, 8, 3, 1, 34, 87, 45, 67, 143, 54, 14, 87, 14, 76, 142, 65, 243, 67, 31};
	int n = sizeof(arr) / sizeof(arr[0]);
	int m = sizeof(brr) / sizeof(brr[0]);
	sort(arr, arr + n);
	sort(brr, brr + m);
	merge(arr, brr, n, m);
	return 0;
}