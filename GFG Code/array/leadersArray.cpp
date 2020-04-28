#include<bits/stdc++.h>
using namespace std;

void leader (int arr[], int n)
{
	int max = arr[n - 1];
	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[i] >= max)
		{
			cout << arr[i] << " ";
			max = arr[i];
		}
	}
}

int main()
{
	int n = 6;
	int arr[] = {5, 3, 20, 15, 8, 3};
	leader(arr, n);
	return 1;
}
