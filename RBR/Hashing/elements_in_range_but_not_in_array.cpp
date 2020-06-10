#include "bits/stdc++.h"
using namespace std;

void notInArray(int arr[], int n, int k, int l)
{
	unordered_set<int> myset;
	for (int i = 0; i < n; i++)
		myset.insert(arr[i]);
	for (int i = k; i <= l; i++)
	{
		if (myset.find(i) == myset.end())
			cout << i << " ";
	}

}
int main()
{
	int arr[] = {4, 5, 7, 2, 2, 5, 7, 8, 5, 3, 3, 6, 7, 8, 3, 1, 3, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 1;
	int l = 10;
	notInArray(arr, n, k, l);
	return 0;
}