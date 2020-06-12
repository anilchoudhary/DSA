#include"bits/stdc++.h"
using namespace std;

// time complexity: O(nlog(n))
// space complexity: O(1)

int main()
{
	int arr[] = { 3, 8, 2, 5, -4, 5, 11, 1, -1, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 10;
	int x;
	sort(arr, arr + n);
	int i = 0, j = n - 1;
	while (i < j)
	{
		x = arr[i] + arr[j];
		if (x == sum)
		{
			cout << arr[i] << " " << arr[j] << endl;
			i++; j--;
		}
		else if (x > sum)
			j--;
		else
			i++;
	}
	return 0;
}