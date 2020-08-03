#include<bits/stdc++.h>
using namespace std;

int decTobase6(int n)
{
	int base6 = 0;
	while (n > 0)
	{
		int digit = n % 6;
		base6 = base6 * 10 + digit;
		n /= 6;
	}
	// cout << base6 << " ";
	return base6;
}

int sumOfNumber(int n)
{
	int sum = 0;
	while (n > 0)
	{
		int digit = n % 10;
		sum = sum + digit;
		n /= 10;
	}
	return sum;
}

int countInversions(int arr[], int n)
{
	int totalInversion = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
				totalInversion++;
		}
	}
	return totalInversion;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int derseq[n];
	for (int i = 0; i < n; i++)
	{
		derseq[i] = sumOfNumber(decTobase6(arr[i]));
	}
	// cout << endl;
	// for (int i = 0; i < n; i++)
	// 	cout << derseq[i] << " ";
	// cout << endl;
	int totalInversion = countInversions(derseq, n);
	cout << totalInversion << endl;
	return 0;
}