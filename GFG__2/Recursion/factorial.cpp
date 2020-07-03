#include<bits/stdc++.h>
using namespace std;

//simple version
int fact(int n)
{
	if (n == 1)
		return 1;
	return n * fact(n - 1);
}

// tail recursive version
int fact2(int n, int ans)
{
	if (n <= 0)
		return ans;
	return fact2(n - 1, n * ans);
}

int main()
{
	int n = 6;
	cout << fact(n) << endl;
	cout << fact2(n , 1) << endl;
	return 0;
}