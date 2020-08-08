#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t1, t2, m;
	cin >> t1 >> t2 >> m;
	int x;
	if (t1 > 0 && t2 > 0 && m > 0)
	{
		for (int i = 0; i <= t2; i++)
		{
			x = i * (2 * i - 1);
			if (x >= t1 && x <= t2)
			{
				m--;
				if (m == 0)
				{
					cout << x << endl;
					return 0;
				}
			}
		}
		if (m > 0)
			cout << "No number is present at this index." << endl;
	}
	else
		cout << "Invalid Input." << endl;
	return 0;
}