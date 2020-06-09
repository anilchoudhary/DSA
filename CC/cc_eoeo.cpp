#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
#ifndef ONLINE_JUDGES
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int ts, js = 0;
		cin >> ts;
		// cout << "awesome" << endl;
		if (ts % 2 != 0)
		{
			for (int i = 2; i < ts; i += 2)
			{
				js++;
				// cout << js << endl;
			}
			cout << js << endl;
		}
		//cout << "hi" << endl;
		else
		{
			while (ts % 2 == 0)
				ts /= 2;
			for (int i = 2; i < ts; i += 2)
			{
				js++;
				// cout << js << endl;
			}
			cout << js << endl;
		}
	}
	return 0;
}