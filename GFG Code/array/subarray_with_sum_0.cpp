#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n)
{
	set<int> sumSet;

	int sum = 0;
	for (int i = 0 ; i < n ; i++)
	{
		sum += arr[i];

		if (sum == 0 || sumSet.find(sum) != sumSet.end())
			return true;

		sumSet.insert(sum);
	}
	return false;
}

int main()
{
	int arr[] = { -1, -1, 1, -1, -1};
	int n = sizeof(arr) / sizeof(arr[0]);
	if (subArrayExists(arr, n))
		cout << "Found a subarray with 0 sum";
	else
		cout << "No Such Sub Array Exists!";
	return 0;
}
