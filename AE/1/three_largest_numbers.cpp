#include"bits/stdc++.h"
using namespace std;

// time complexity: O(n)
// space complexity: O(1)

int main()
{
	int arr[] = { 141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int max1, max2, max3;
	max1 = max2 = max3 = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (max3 < arr[i])
		{
			max1 = max2;
			max2 = max3;
			max3 = arr[i];
		}
		else if (max2 < arr[i])
		{
			max1 = max2;
			max2 = arr[i];
		}
		else if (max1 < arr[i])
		{
			max1 = arr[i];
		}
	}
	cout << max1 << " " << max2 << " " << max3 << endl;
	return 0;
}