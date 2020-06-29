#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 343, 44, 2, 6, 2, 2, 7, 65, 32, 547, 3, 5, 567, 4, 32, 37, 43, 5, 72, 4, 5, 432, 3, 7, 62, 1, 5, 76, 3, 454};
	int n = sizeof(arr) / sizeof(arr[0]);

	long long sum = 0;
	for (auto x : arr)
		sum += x;
	cout << "total sum of the array is: " << sum << endl;

	long long sum2 = 0;
	sum2 = accumulate(arr, arr + n , 0);
	cout << "total sum of the array is: " << sum2 << endl;

	return 0;
}