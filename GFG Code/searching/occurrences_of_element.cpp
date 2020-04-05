// Given a sorted array with repetitions, count occurrences of given element.

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

int rmi(int arr[], int l, int r, int x, int n)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if ((arr[mid] == x) && ((mid == n-1 || arr[mid+1] != x)))
			return mid;

		if (arr[mid] > x)
			return rmi(arr, l, mid - 1, x, n);

		return rmi(arr, mid + 1, r, x, n);
	}

	return -1;
}


int main(void)
{
	int arr[] = { 2, 3, 3, 3, 3 };
	int x = 2;
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr+n);
	int li = lmi(arr, 0, n - 1, x);
	int ri = rmi(arr, 0, n - 1, x, n);
	if(ri != -1 && li != -1)
    {
        cout<<ri - li + 1;
    }
	return 0;
}
