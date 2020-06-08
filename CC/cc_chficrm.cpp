#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGES
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		int n, flag = 1;
		cin >> n;
		int arr[n];
		int five = 0, ten = 0, fifteen = 0;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == 5)
			{
				five += 1;
				// cout << "five: " << five << "\n";
			}
			else if (arr[i] == 10)
			{
				ten += 1;
				// cout << "ten: " << ten << "\n";
			}
			else
			{
				fifteen += 1;
				// cout << "fifteen: " << fifteen << "\n";
			}

			if (arr[i] == 10)
			{
				if (five > 0)
				{
					five -= 1;
				}
				else
				{
					flag = 0;
					break;
				}
			}

			else if (arr[i] == 15)
			{
				if ((five > 1) || (ten > 0))
				{
					if (ten > 0)
						ten -= 1;
					else
						five -= 2;
				}
				else
				{
					flag = 0;
					break;
				}
			}
		}
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}