#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {4, 8, 0, 12, 0, 2, 0, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	int z = -1;
	for (int i = 0; i < n; i++)
	{
		if (z == -1 && arr[i] == 0)
			z = i;
		else if (z != -1 && arr[i] != 0)
		{
			swap(arr[z], arr[i]);
			if (arr[z + 1] == 0)
				z = z + 1;
			else
				z = i;
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}