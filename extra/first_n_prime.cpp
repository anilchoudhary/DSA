#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
	if (n == 2 || n == 3) return true;
	if (n % 2 == 0 || n < 2) return false;
	if (n < 9) return true;
	if (n % 3 == 0) return false;
	int r = sqrt(n);
	int f = 5;
	while (f <= r)
	{
		if (n % f == 0) return false;
		if (n % (f + 2) == 0) return false;
		f += 6;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	int count = 0;
	int i = 2;
	while (count < n)
	{
		if (isprime(i))
		{
			count++;
			cout << i << " ";
		}

		i++;
	}
	return 0;
}