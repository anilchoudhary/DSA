#include<bits/stdc++.h>
using namespace std;

int main()
{
	/*
	#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	*/
	int t;
	cin >> t;
	while (t--)
	{
		int k;
		cin >> k;
		k = k - 1;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (i == 0 && j == 0)
					cout << "O";
				else if (k > 0)
				{
					k--;
					cout << ".";
				}
				else
					cout << "X";
			}
			cout << endl;
		}
		// cout << endl << endl;
	}
}