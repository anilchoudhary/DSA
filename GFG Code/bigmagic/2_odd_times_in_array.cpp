// Given in array that contains all elements even number of times except 2 odd occurring elements

#include <bits/stdc++.h>
using namespace std;

void printOdds(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)
		res = res ^ arr[i];

	int set_bit = res & (~(res - 1));

	int x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] & set_bit)
			x = x ^ arr[i];
		else
			y = y ^ arr[i];
	}

	cout << x << " " << y;
}

int main()
{
	int arr[] = { 2, 3, 3, 4, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printOdds(arr, n);
	return 0;
}
