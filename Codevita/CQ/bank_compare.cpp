#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGES
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	double p, s, mi, sum, emi , bank[5], sq;
	int y, n, k, i, yrs, l = 0;
	cin >> p >> y;
	for (k = 0; k < 2; k++)
	{
		cin >> n;
		sum = 0;
		for (i = 0; i < n; i++)
		{
			cin >> yrs;
			cin >> s;
			mi = 0;
			sq = pow((1 + s), yrs * 12);
			emi = (p * s) / (1 - 1 / sq);
			sum += emi;
		}
		bank[l++] = sum;
	}
	if (bank[0] < bank[1])
		cout << "Bank A";
	else
		cout << "Bank B";
	return 0;
}