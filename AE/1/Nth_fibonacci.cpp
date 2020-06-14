#include "bits/stdc++.h"
using namespace std;

// Time Complexity = O(n)
// Space Complexity = O(1)

int main()
{
	int n = 6;
	int i, j, k, temp;
	i = 0; j = 1;
	if (n == 1)
	{
		cout << 0 << endl;
		return 0;
	}
	else if (n == 2)
	{
		cout << 1 << endl;
		return 0;
	}
	for (int l = 0; l < n - 2; l++)
	{
		k = i + j;
		temp = j;
		j = k;
		i = temp;
	}
	cout << k << endl;
	return 0;
}