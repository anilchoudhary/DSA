// given an infinite sized sorted array and an element x, find if x is present in the array or not
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}

int searchinfi(int arr[], int x)
{
    if(arr[0] == x)
        return 0;
    int i = 1;
    while(arr[i] < x)
        i = i * 2;
    if(arr[i] == x)
        return i;
    else
        return binarySearch( arr, i/2, i, x);
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr+n);
	int result = searchinfi(arr, x);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result;
	return 0;
}
