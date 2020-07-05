#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int brr[], int n, int m)
{
	int i = 0, j = 0;
	int a[n + m ];
	int k = 0;
	while (i < n && j < m)
	{
		if (arr[i] > brr[j])
		{
			a[k++] = brr[j];
			j++;
		}
		else
		{
			a[k++] = arr[i];
			i++;
		}
	}




	while (i < n)
	{
		a[k++] = arr[i++];
	}


	while (j < m)
	{
		a[k++] = brr[j++];
	}


	for (auto x : a)
	{
		cout << x << " ";
	}
}

int main()
{
	int arr[]  = {7, 63, 2, 1, 35};
	int brr[] = {8, 3, 34, 87, 14};
	int n = sizeof(arr) / sizeof(arr[0]);
	int m = sizeof(brr) / sizeof(brr[0]);
	sort(arr, arr + n);
	sort(brr, brr + m);
	merge(arr, brr, n, m);
	return 0;
}