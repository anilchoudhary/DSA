#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int b, n;
	cin >> b >> n;
	int zom_energy[n];
	for (int i = 0; i < n; i++)
	{
		cin >> zom_energy[i];
		if (!isdigit(zom_energy[i]))
		{
			cout << "Invalid Input";
			return 0;
		}
	}
	// sort(zom_energy, zom_energy + n);
	for (int i = 0; i < n; i++)
	{
		if (b >= zom_energy[i])
		{
			b = b - ((zom_energy[i] % 2) + (zom_energy[i] / 2));
		}
		else
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}