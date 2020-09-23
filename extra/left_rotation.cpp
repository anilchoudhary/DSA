#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {4, 5, 7, 2, 5, 7, 3, 2, 7, 53, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	int k = 3;
	reverse(arr, arr + k);
	reverse(arr + k , arr + n);
	reverse(arr, arr + n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}