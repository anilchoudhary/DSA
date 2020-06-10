#include "bits/stdc++.h"
using namespace std;

void subArrays(int arr[], int n)
{
	unordered_set<int> sumSet;

	int sum = 0, count = 0;
	for (int i = 0 ; i < n ; i++)
	{
		sum += arr[i];

		if (sum == 0 || sumSet.find(sum) != sumSet.end())
			count++;

		sumSet.insert(sum);
	}
	cout << count << endl;
}


int main()
{
	int arr[] = {11, 10, -5, -3, -2, 10, 5, -1, -6};
	int n = sizeof(arr) / sizeof(arr[0]);
	subArrays(arr, n);
	return 0;
}