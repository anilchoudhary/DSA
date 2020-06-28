#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, r1, r2, revenue, r_rooms = 0, l_rooms = 0, r_revenue = 0;
	cin >> n >> r1 >> r2 >> revenue;
	int patients = 0;
	int m[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int k = 0; k <= n; k++)
	{
		for (int i = 1; i <= 12; i++)
		{
			for (int j = 1; j <= m[i]; j++)
			{
				patients = pow((6 - i), 2) + abs(j - 15);
				r_rooms = n - k;
				l_rooms = k;
				if (patients <= r_rooms)
					r_revenue += r2 * patients;
				else if (patients > r_rooms && patients <= n)
					r_revenue += r2 * r_rooms + r1 * (patients - r_rooms);
				else if (patients > n)
					r_revenue += r2 * r_rooms + r1 * l_rooms;
			}
			// cout << r_revenue << endl;

		}
		if (r_revenue >= revenue)
		{

			cout << k << endl;
			break;
		}
		else
			r_revenue = 0;
	}
	return 0;
}