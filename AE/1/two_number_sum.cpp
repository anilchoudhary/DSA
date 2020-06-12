#include"bits/stdc++.h"
using namespace std;

// time complexity: O(n)
// space complexity: O(n)

int main()
{
	int arr[] = { 3, 5, -4, 5, 11, 1, -1, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 10;
	int x;
	unordered_set<int> mymap;

	for (int i = 0; i < n; i++)
	{
		x = sum - arr[i];
		if (mymap.find(x) == mymap.end())
			mymap.insert(arr[i]);
		else
		{
			cout << arr[i] << " " << x << endl;
			mymap.insert(arr[i]);
		}
	}
	return 0;
}