#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {4, 8, 0, 12, 0, 2, 0, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	int z = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != 0)
		{
			swap(arr[i], arr[z]);
			z++;
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}