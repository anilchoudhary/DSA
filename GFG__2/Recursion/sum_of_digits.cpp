#include<bits/stdc++.h>
using namespace std;


int sod(int n)
{
	int sum = 0;
	if (n <= 0)
		return 0;
	sum += n % 10;
	return sum + sod(n / 10);
}

int main()
{
	int n = 123456789;
	cout << sod(n) << endl;
	return 0;
}