#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high)
{
	int i=low,j=high; int temp;
	while(i<j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		++i; --j;
	}
}

void rotate(int arr[], int n, int d)
{
	reverse(arr, 0, d-1);
	reverse(arr, d, n-1);
	reverse(arr, 0, n-1);
}

int main()
{
	int n = 9;
	int d = 2;
	int arr[]= {1,2,3,4,5,6,7,8,9};
	rotate(arr, n, d);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 1;
}
