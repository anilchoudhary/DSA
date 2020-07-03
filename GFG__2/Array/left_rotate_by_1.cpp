#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {20, 10, 20, 8, 65, 98, 12};
	int n = sizeof(arr) / sizeof(arr[0]);
	int first = arr[0];
	for (int i = 1; i < n; i++)
	{
		arr[i - 1] = arr[i];
		if (i == n - 1)
			arr[i] = first;
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}