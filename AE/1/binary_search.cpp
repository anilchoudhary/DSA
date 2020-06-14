#include<bits/stdc++.h>
using namespace std;

// Time Complexity = O(log(n))
// Space Complexity = O(1)

void binary_search(int arr[], int l, int h, int x)
{
	int m;
	while (l <= h)
	{
		m = (l + h) / 2;
		if (arr[m] == x)
		{
			cout << "element is present.";
			return;
		}
		else if (arr[m] > x)
			h = m - 1;
		else
			l = m + 1;
	}
	cout << "Element not found.";
}

int main()
{
	int arr[] = { 141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 17;
	sort(arr, arr + n);
	binary_search(arr, 0, n - 1, x);
}