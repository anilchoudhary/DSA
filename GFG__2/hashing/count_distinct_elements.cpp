#include<bits/stdc++.h>
using namespace std;

int count_distinct(int arr[], int n)
{
	unordered_set <int> us;
	for (int i = 0; i < n; i++)
	{
		us.insert(arr[i]);
	}
	return us.size();
}

int main()
{
	int arr[] = { 3, 34, 6, 23, 546, 7, 2343, 5, 4, 3, 32, 6, 7, 564, 342, 56, 765, 56, 42, 324, 3, 67, 54, 42, 324, 5, 5, 54, 323, 24, 5, 6776, 443, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << count_distinct(arr, n) << endl;
	return 0;
}