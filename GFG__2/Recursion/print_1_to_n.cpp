#include<bits/stdc++.h>
using namespace std;

// tail recurvsive version
void print(int n, int i)
{
	if (i < 0)
		return;
	cout << n - i << " ";
	print(n , i - 1);

}

// simple version
void print2(int n)
{
	if (n <= 0)
		return ;
	print2(n - 1);
	cout << n << " ";
}

int main()
{
	int n = 10;
	print(n, n - 1);
	cout << endl;
	print2(n);
	return 0;
}