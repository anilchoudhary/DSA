#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x = 6, y = 22, n, i, j, k = 0;
	// cin>>n;
	n = 5;
	if (n > 0 && n <= 14)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i; j < n; j++)
				cout << " ";
			for (k = 1; k < i + 1; k++)
			{
				cout << setw(5) << setfill('0') << x << " ";
				x += y;
				y += 16;
			}
			// cout << setw(5) << setfill('0') << x;
			// x += y;
			// y += 16;
			cout << endl;
		}
	}
	return 0;
}