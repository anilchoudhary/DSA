#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int mp, m;
	float roi, amt, interest, req;
	cin >> mp >> m >> roi;
	if (mp <= 0 || m <= 0 || roi < 0)
		return 0;
	else
	{
		req = mp;
		while (m--)
		{
			amt = req / (1 + roi / (float) 1200);
			interest = req - amt;
			req = req + (mp - interest);
		}
		req -= mp;
		double finalamt = ceil(req - 0.5);
		if (finalamt > req)
			finalamt = ceil(req);
		else
			finalamt = floor(req);
		cout << finalamt;
	}
	return 0;
}