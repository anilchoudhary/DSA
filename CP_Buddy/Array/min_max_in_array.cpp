#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 12, 1234, 45, 67, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int mini = INT_MAX, maxi = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < mini)
			mini = arr[i];
		if (arr[i] > maxi)
			maxi = arr[i];
	}
	cout << mini << " " << maxi;
	return 0;
}