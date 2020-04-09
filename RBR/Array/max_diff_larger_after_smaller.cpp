// Maximum difference between two elements in an array such that
// larger element appears after the smaller elements

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 7;
	int arr[n] = {4, 3, 10, 1, 10, 1, 6};
	int mini = arr[0];
	int maxi = 0;
	for (int i = 1; i < n; i++)
	{
		if (maxi < (arr[i] - mini))
			maxi = arr[i] - mini;
		if (mini > arr[i])
			mini = arr[i];
	}
	cout << maxi << endl;

}