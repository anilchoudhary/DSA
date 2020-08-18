#include<bits/stdc++.h>
using namespace std;


int main()
{
	{
		int n;
		cin >> n;
		// n = 6;
		if (n < 3)
		{
			cout << -1 << endl;
			return 0;
		}
		else if (n == 3)
		{
			cout << 210 << endl;
			return 0;
		}
		else
		{
			int rem = n % 6;
			cout << 1;
			for (int i = 1; i <= n - 4; i++)
				cout << 0;
			switch (rem)
			{
			case 4: cout << "050";
				break;
			case 5: cout << "080";
				break;
			case 0: cout << 170;
				break;
			case 1: cout << "020";
				break;
			case 2: cout << 200;
				break;
			case 3: cout << 110;
				break;
			}
		}
	}
	return 0;
}