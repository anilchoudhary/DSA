#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n, max_time;
		cin >> n >> max_time;
		int zom_energy[n];
		for (int i = 0; i < n; i++)
		{
			cin >> zom_energy[i];
		}
		sort(zom_energy, zom_energy + n);
		int p, d;
		cin >> p >> d;
		if (max_time < n)
		{
			cout << "NO" << endl;
			return 0;
		}
		for (int i = 0; i < n; i++)
		{
			if (p >= zom_energy[i] && max_time > 0)
			{
				max_time--;
				p = p + (p - zom_energy[i]);
				// cout << p << endl;
			}
			else
			{
				cout << "NO" << endl;
				return 0;
			}
		}
		if (p >= d)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}