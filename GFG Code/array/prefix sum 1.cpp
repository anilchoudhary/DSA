#include<bits/stdc++.h>
using namespace std;
int psum[100];

void prefixsum(int arr[], int n)
{
	psum[0] = arr[0];
	for (int i = 1; i < n; i++)
		psum[i] = psum[i - 1] + arr[i];
}

void query(int l, int r)
{
	int ans;
	if (l != 0)
	{
		ans = psum[r] - psum[l - 1];
	}
	else
		ans = psum[r];
	cout << ans << endl;
}

int main()
{
	int arr[] = {2, 8, 3, 9, 6, 5, 4};
	int n = 7;
	prefixsum(arr, n);
	query(0, 2);
	query(1, 3);
	query(2, 6);
	return 1;
}
