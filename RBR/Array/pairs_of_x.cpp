// Print all pairs in an array  whose sum is X.

#include<bits/stdc++.h>
using namespace std;
#define MAX 10

void findPairs(int *arr, int size, int sum)
{
	int index, temp;
	int hash[MAX] = {0};

	for (index = 0; index < size; index++)
	{
		temp = sum - arr[index];
		if (temp >= 0 && hash[temp] == 1)
			cout << "Pair with given sum is: " << arr[index] << " " << temp << "\n";
		hash[arr[index]] = 1;
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int i, j, k, p, q, r, x, y, u, v, n, m;
	int arr[] = { 1, 4, 6, 2, 0, 5 };

	findPairs(arr, 6, 6);
	return 0;
}
