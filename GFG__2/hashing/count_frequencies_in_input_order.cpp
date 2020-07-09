#include<bits/stdc++.h>
using namespace std;

void count_frequencies(int arr[], int n)
{
	unordered_map<int, int> um;
	map<int, int> m;

	for (int i = 0; i < n; i++)
	{
		um[arr[i]]++;
		if (um[arr[i]] == 1 )
		{
			m[i] = arr[i];
		}
	}
	for (int i = 0; i < m.size(); i++)
	{
		// index = m[i];
		// um[index]
		if (m[i] != 0)
		{
			cout << m[i] << " " << um[m[i]];
			cout << endl;
		}

	}
	return;
}

int main()
{
	int arr[] = { 3, 34, 6, 23, 546, 7, 2343, 5, 4, 3, 32, 6, 7, 564, 342, 56, 765, 56, 42, 324, 3, 67, 54, 42, 324, 5, 5, 54, 323, 24, 5, 6776, 443, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	unordered_map <int, int> um;
	map<int, int> m;
	int index;
	count_frequencies(arr, n);

	cout << endl;
	return 0;
}