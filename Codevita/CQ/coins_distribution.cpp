#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	// cin>>n;
	n = 13;
	int coin1, coin2, coin5, balance;
	coin5 = (n - 4) / 5;
	balance = n - (coin5 * 5);
	if (balance % 2 == 0)
		coin1 = 2;
	else
		coin1 = 1;
	balance -= coin1;
	coin2 = balance / 2;
	cout << coin1 + coin2 + coin5 << " ";
	cout << coin5 << " " << coin2 << " " << coin1;
	return 0;
}