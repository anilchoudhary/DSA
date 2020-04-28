// Given in array that contains all elements even number of times except one odd occurring elements

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {2, 4, 1, 5, 6, 2, 4, 1, 5};
	int ans = 0;
	int n = sizeof(arr) / sizeof(int);
	for (int i = 0; i < n; i++)
	{
		ans = ans ^ arr[i];
	}
	cout << ans;
	return 1;
}
