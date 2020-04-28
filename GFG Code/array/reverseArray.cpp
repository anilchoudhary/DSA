#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
	int i = 0, j = n - 1; int temp;
	while (i < j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		++i; --j;
	}
}

int main()
{
	int n = 9;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	reverse(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 1;
}
