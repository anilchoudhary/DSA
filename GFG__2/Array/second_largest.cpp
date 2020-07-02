#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {20, 10, 20, 8, 12};
	int n = sizeof(arr) / sizeof(arr[0]);
	int smaxi = INT_MIN;
	int maxi = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (maxi < arr[i])
		{
			smaxi = maxi;
			maxi = arr[i];
		}
		else if (arr[i] < maxi && smaxi < arr[i])
		{
			smaxi = arr[i];
		}
	}
	cout << smaxi << endl;


	return 0;
}