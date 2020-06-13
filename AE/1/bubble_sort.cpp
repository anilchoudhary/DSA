#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
	int flag = 0;
	for (int i = 0; i < n - 1; i++)
	{
		flag = 1;
		for (int j = 0; j < n - i - 1 ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				flag = 0;
			}
		}
		if (flag)
			break;
	}
	// cout << "\nSorted list is as follows\n";
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << arr[i] << " ";
	// }

}

int main()
{
	int arr[] = { 141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, n);

	cout << "\nSorted list is as follows\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}