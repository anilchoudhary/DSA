#include <bits/stdc++.h>
using namespace std;

int s = 0;

void sum(int n)
{
	if (n == 0)
	{
		cout << s << endl;
		return;
	}
	s = s + n % 10;
	sum(n / 10);
}

int main()
{
	int n;
	cin >> n;
	sum(n);
	return 0;
}
