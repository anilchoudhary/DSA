#include<bits/stdc++.h>
using namespace std;

int memo[1000] = {0};
int fib(int n)
{
	if (memo[n] != 0)
		return memo[n];

	if (n <= 1)
	{
		memo[n] = n;
		return memo[n];
	}
	memo[n] = fib(n - 1) + fib(n - 2);

	return memo[n];
}

int main()
{
	int x = 6;
	cout << fib(x) << endl;
	return 0;
}