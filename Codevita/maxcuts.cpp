#include<bits/stdc++.h>
using namespace std;

int maxcuts(int n, int a, int b, int c)
{
	if (n == 0) return 0;
	if (n < 0) return -1;
	int res = max(maxcuts(n - a, a, b, c), maxcuts(n - b, a, b, c));
	res = max(res, maxcuts(n - c, a, b, c));
	if (res == -1)
		return -1;
	return res + 1;
}

int main()
{
	cout << maxcuts(5, 4, 2, 6);
	return 1;
}
