#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = { 3, 2, 54, 5, 23, 34, 6, 4, 331, 1, 4, 6, 677, 87, 7, 64, 43, 2, 24, 213, 3454, 234, 23, 1, 1, 332, 56, 53, 4, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	unordered_set <int> us;
	for (int i = 0; i < n; i++)
		us.insert(arr[i]);
	cout << "Total elements: " << n << endl;
	cout << "Total distinct elements: " << us.size();
	return 0;
}