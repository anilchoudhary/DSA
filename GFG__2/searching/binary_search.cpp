#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int m = l + (r - l) / 2;
		if (arr[m] == x)
			return m;
		else if (arr[m] > x)
			return binary_search(arr, l, m - 1, x);
		else
			return binary_search(arr, m + 1, r, x);
	}
	return -1;
}

int main()
{
	int arr[] = {3, 4, 67, 2, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + n);
	cout << "Sorted Array: ";
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
	int x = 2;
	int index = binary_search(arr, 0, n - 1, x);
	if (index != -1)
		cout << "Element found at index: " << index << endl;
	else
		cout << "Element did not find.";
	return 0;
}