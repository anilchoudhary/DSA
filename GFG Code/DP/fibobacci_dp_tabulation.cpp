#include<bits/stdc++.h>
using namespace std;

int memo[1000] = {0};
int fib(int n)
{
	memo[0] = 0;
	memo[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		memo[i] = memo[i - 1] + memo[i - 2];
	}
	return memo[n];
}

int main()
{
	int x = 6;
	cout << fib(x) << endl;
	return 0;
}