#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 343, 44, 2, 6, 2, 2, 7, 65, 32, 547, 3, 5, 567, 4, 32, 37, 43, 5, 72, 4, 5, 432, 3, 7, 62, 1, 5, 76, 3, 454};
	int n = sizeof(arr) / sizeof(arr[0]);
	int maxi = INT_MIN;
	for (auto x : arr)
	{
		if (maxi < x)
			maxi = x;
	}
	cout << "maximum element in the array is: " << maxi << endl;

	int result  = *max_element(arr, arr + n);
	cout << "maximum element in the array is: " << result << endl;


	vector<int> vec { 343, 44, 2, 6, 2, 2, 7, 65, 32, 547, 3, 5, 567, 4, 32, 37, 43, 5, 72, 4, 5, 432, 3, 7, 62, 1, 5, 76, 3, 454};
	int result2 = *max_element(vec.begin(), vec.end());
	cout << "maximum element in the vector is: " << result2 << endl;
	return 0;
}