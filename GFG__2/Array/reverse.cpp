#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {20, 10, 20, 8, 65, 98, 12, 32};
	int n = sizeof(arr) / sizeof(arr[0]);
	int j = n - 1, i = 0;
	while (i < j)
	{
		swap(arr[i], arr[j]);
		i++; j--;
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}