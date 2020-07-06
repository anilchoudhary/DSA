#include<bits/stdc++.h>
using namespace std;

void count_sort(int arr[], int n, int k)
{
	unordered_map<int , int> mymap(k);
	for (int i = 0; i < n; i++)
	{
		mymap[arr[i]]++;
	}

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < mymap[i]; j++)
			cout << i << " ";
	}
}

int main()
{
	int arr[] = {4, 5, 2, 1, 5, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 8;
	count_sort(arr, n, k);
	return 0;
}