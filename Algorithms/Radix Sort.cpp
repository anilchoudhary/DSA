#include <bits/stdc++.h>

using namespace std;

void countSort(int arr[], int n, int exp)
{
	int output[n], i, count[10] = {0};

	for (i = 0; i < n; i++)
		count[(arr[i] / exp) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i-1];

	for (i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

	for (i = 0; i < n; i++)
		arr[i] = output[i];
}

void radixsort(int arr[], int n)
{
	int exp, m;
	m = *max_element(arr, arr+n);

	for (exp = 1; m/exp > 0; exp *= 10)
		countSort(arr, n, exp);
}

int main()
{
	int n, i;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter the elements of array: ";

	int arr[n];
	for(i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	radixsort(arr, n);

	cout<<"\nSorted Data: ";
	for (i = 0; i < n; i++)
		cout<<arr[i]<<" ";
	return 0;
}
