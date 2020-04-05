// Given a sorted array with repetitions, find left most index of an element.

#include<bits/stdc++.h>
using namespace std;

int lmi(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if ((arr[mid] == x) && ((mid == 0 || arr[mid-1] != x)))
			return mid;

		if (arr[mid] >= x)
			return lmi(arr, l, mid - 1, x);

		return lmi(arr, mid + 1, r, x);
	}

	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 3, 3, 3 };
	int x = 3;
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr+n);
	int result = lmi(arr, 0, n - 1, x);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index  " << result;
	return 0;
}
