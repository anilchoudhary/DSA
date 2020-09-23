#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {3, 4, 5, 62, 3, 5, 21, 67, 44, 12, 67, 34, 21};
	int n = sizeof(arr) / sizeof(arr[0]);
	int max = INT_MIN, max2 = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
		{
			max2 = max;
			max = arr[i];
			// cout << max2 << endl;
		}
		else if (arr[i] > max2 && arr[i] < max)
		{
			max2 = arr[i];
			// cout << max2 << endl;

		}
	}
	cout << max2;
	return 0;
}